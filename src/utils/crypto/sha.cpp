#include <utils/crypto/sha.h>

#include <sstream>
#include <iomanip>

#include <openssl/sha.h>

#include <utils/crypto/convert.h>

std::string SHA::sha224(const std::string &str) {
    SHA256_CTX context;
    unsigned char buffer[ SHA224_DIGEST_LENGTH ];

    SHA224_Init(&context);
    SHA224_Update(&context, str.c_str(), str.size());
    SHA224_Final(buffer, &context);

    return Convert::to_hexadecimal(std::string{ buffer, buffer + SHA224_DIGEST_LENGTH });
}

std::string SHA::sha256(const std::string &str) {
    SHA256_CTX context;
    unsigned char buffer[ SHA256_DIGEST_LENGTH ];

    SHA256_Init(&context);
    SHA256_Update(&context, str.c_str(), str.size());
    SHA256_Final(buffer, &context);

    return Convert::to_hexadecimal(std::string{ buffer, buffer + SHA256_DIGEST_LENGTH });
}

std::string SHA::sha384(const std::string &str) {
    SHA512_CTX context;
    unsigned char buffer[ SHA384_DIGEST_LENGTH ];

    SHA384_Init(&context);
    SHA384_Update(&context, str.c_str(), str.size());
    SHA384_Final(buffer, &context);

    return Convert::to_hexadecimal(std::string{ buffer, buffer + SHA384_DIGEST_LENGTH });
}

std::string SHA::sha512(const std::string &str) {
    SHA512_CTX context;
    unsigned char buffer[ SHA512_DIGEST_LENGTH ];

    SHA512_Init(&context);
    SHA512_Update(&context, str.c_str(), str.size());
    SHA512_Final(buffer, &context);

    return Convert::to_hexadecimal(std::string{ buffer, buffer + SHA512_DIGEST_LENGTH });
}
