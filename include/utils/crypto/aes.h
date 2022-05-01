//
// Created by xRockmetalx
//

#ifndef AES_H
#define AES_H

#include <string>
#include <cstddef>

namespace AES {
    std::string encrypt(const std::string &str, const std::string &key, const std::string iv);
    std::string decrypt(const std::string &str, const std::string &key, const std::string &iv);
};

#endif // AES_H
