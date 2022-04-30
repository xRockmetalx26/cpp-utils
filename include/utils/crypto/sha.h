//
// Created by xRockmetalx
//

#ifndef SHA_H
#define SHA_H

#include <string>

namespace SHA {
    static std::string sha224(const std::string &str);
    static std::string sha256(const std::string &str);
    static std::string sha384(const std::string &str);
    static std::string sha512(const std::string &str);
};

#endif // SHA_H
