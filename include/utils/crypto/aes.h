//
// Created by xRockmetalx
//

#ifndef AES_H
#define AES_H

#include <string>
#include <cstddef>

class AES {
public:

    AES() = delete;
    AES(const AES &) = delete;
    AES(const AES &&) = delete;
    AES& operator = (const AES &) = delete;
    AES& operator = (const AES &&) = delete;
    ~AES() = delete;

    // return encrypted std_string or empty std::string if params are invalid
    static std::string encrypt(const std::string &str, const std::string &key, const std::string iv, std::size_t buffer_len);

    // return decrypted std_string or empty std::string if params are invalid
    static std::string decrypt(const std::string &str, const std::string &key, const std::string &iv, std::size_t buffer_len);

    static bool is_valid(const std::string &key, const std::string &iv, std::size_t buffer_len);

private:

    static void handleErrors();
};

#endif // AES_H
