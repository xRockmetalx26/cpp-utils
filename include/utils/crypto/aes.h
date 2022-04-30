//
// Created by xRockmetalx
//

#ifndef AES_H
#define AES_H

#include <string>
#include <cstddef>

namespace AES {
    // return encrypted std_string or empty std::string if params are invalid
    static std::string encrypt(const std::string &str, const std::string &key, const std::string iv);

    // return decrypted std_string or empty std::string if params are invalid
    static std::string decrypt(const std::string &str, const std::string &key, const std::string &iv);

    static bool is_valid(const std::string &key, const std::string &iv, std::size_t buffer_len);
};

#endif // AES_H
