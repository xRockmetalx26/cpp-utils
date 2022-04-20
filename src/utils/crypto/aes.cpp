#include <utils/crypto/aes.h>

#include <iostream>
#include <iomanip>

#include <openssl/evp.h>
#include <openssl/err.h>

void AES::handleErrors() {
    ERR_print_errors_fp(stderr);
    abort();
}

bool AES::is_valid(const std::string &key, const std::string &iv, const std::size_t buffer_len) {
    if(key.length() != 32) {
        std::cerr << "ERROR: The key must be 256 bits (32 bytes)" << std::endl;
        return false;
    }

    if(iv.length() != 16) {
        std::cerr << "ERROR: The iv must be 128 bits (16 bytes)" << std::endl;
        return false;
    }

    if(buffer_len < 1) {
        std::cerr << "ERROR: The buffer size must be greater than 0" << std::endl;
        return false;
    }

    return true;
}

std::string AES::encrypt(const std::string &str, const std::string &key, const std::string iv, const std::size_t buffer_len) {
    EVP_CIPHER_CTX *context{EVP_CIPHER_CTX_new()};

    if(!context) {
        handleErrors();
    }

    if(EVP_EncryptInit_ex(context, EVP_aes_256_cbc(), NULL, (const unsigned char*) key.c_str(), (const unsigned char*) iv.c_str()) != 1) {
        handleErrors();
    }

    unsigned char buffer[buffer_len];
    int len;

    if(EVP_EncryptUpdate(context, buffer, &len, (const unsigned char*) str.c_str(), str.size()) != 1) {
        handleErrors();
    }

    int encrypted_text_len{len};

    if(EVP_EncryptFinal_ex(context, buffer + len, &len) != 1) {
        handleErrors();
    }

    EVP_CIPHER_CTX_free(context);

    return std::string{buffer, buffer + encrypted_text_len + len};
}

std::string AES::decrypt(const std::string &str, const std::string &key, const std::string &iv, const std::size_t buffer_len) {
    EVP_CIPHER_CTX *context{EVP_CIPHER_CTX_new()};

    if(!context) {
        handleErrors();
    }

    if(EVP_DecryptInit_ex(context, EVP_aes_256_cbc(), NULL, (const unsigned char*) key.c_str(), (const unsigned char*) iv.c_str()) != 1) {
        handleErrors();
    }

    unsigned char buffer[buffer_len];
    int len;

    if(EVP_DecryptUpdate(context, buffer, &len, (unsigned char*) str.c_str(), str.length()) != 1) {
        handleErrors();
    }

    int decrypted_txt_len{len};

    if(EVP_DecryptFinal_ex(context, buffer + len, &len) != 1) {
        handleErrors();
    }

    EVP_CIPHER_CTX_free(context);

    return std::string{buffer, buffer + decrypted_txt_len + len};
}
