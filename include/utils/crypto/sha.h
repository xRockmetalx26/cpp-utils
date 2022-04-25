//
// Created by xRockmetalx
//

#ifndef SHA_H
#define SHA_H

#include <string>

class SHA {
public:

    SHA() = delete;
    SHA(const SHA &) = delete;
    SHA(const SHA &&) = delete;
    SHA& operator =( const SHA &) = delete;
    SHA& operator = (const SHA &&) = delete;
    ~SHA() = delete;

    static std::string sha224(const std::string &str);
    static std::string sha256(const std::string &str);
    static std::string sha384(const std::string &str);
    static std::string sha512(const std::string &str);
};

#endif // SHA_H
