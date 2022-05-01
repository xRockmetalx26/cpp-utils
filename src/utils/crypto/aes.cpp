#include <utils/crypto/aes.h>

#include <iostream>
#include <iomanip>
#include <exception>
#include <openssl/evp.h>
#include <openssl/err.h>

void handleErrors() {
    ERR_print_errors_fp(stderr);
    abort();
}

bool validate(const std::string &str, const std::string &key, const std::string &iv) {
    if(str.length() < 1) {
        throw std::runtime_error{ "ERROR: string length must be greater than zero." };
    }

    if(key.length() < 1) {
        throw std::runtime_error{ "ERROR: key length must be greater than zero." };
    }

    if(iv.length() != 16) {
        throw std::runtime_error{ "ERROR: iv length must be 16." };
    }

    return true;
}

std::string AES::encrypt(const std::string &str, const std::string &key, const std::string iv) {
    validate(str, key, iv);

    auto context = EVP_CIPHER_CTX_new();

    if(not context) {
        handleErrors();
    }

    if(EVP_EncryptInit_ex(context, EVP_aes_256_cbc(), NULL, (const unsigned char*) key.c_str(), (const unsigned char*) iv.c_str()) != 1) {
        handleErrors();
    }

    unsigned char buffer[ (str.size() / 16 + 2) * 16 ];
    int len;

    if(EVP_EncryptUpdate(context, buffer, &len, (const unsigned char*) str.c_str(), str.size()) != 1) {
        handleErrors();
    }

    auto encrypted_text_len = len;

    if(EVP_EncryptFinal_ex(context, buffer + len, &len) != 1) {
        handleErrors();
    }

    EVP_CIPHER_CTX_free(context);

    return std::string{ buffer, buffer + encrypted_text_len + len };
}

std::string AES::decrypt(const std::string &str, const std::string &key, const std::string &iv) {
    validate(str, key, iv);

    auto context = EVP_CIPHER_CTX_new();

    if(not context) {
        handleErrors();
    }

    if(EVP_DecryptInit_ex(context, EVP_aes_256_cbc(), NULL, (const unsigned char*) key.c_str(), (const unsigned char*) iv.c_str()) != 1) {
        handleErrors();
    }

    unsigned char buffer[ (str.size() / 16 + 2) * 16 ];
    int len;

    if(EVP_DecryptUpdate(context, buffer, &len, (unsigned char*) str.c_str(), str.length()) != 1) {
        handleErrors();
    }

    auto decrypted_txt_len = len;

    if(EVP_DecryptFinal_ex(context, buffer + len, &len) != 1) {
        handleErrors();
    }

    std::cout << "aca" << std::endl;

    EVP_CIPHER_CTX_free(context);

    return std::string{ buffer, buffer + decrypted_txt_len + len };
}
