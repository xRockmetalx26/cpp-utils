//
// Created by xRockmetalx
//

#ifndef CONVERT_H
#define CONVERT_H

#include <string>

class Convert {
public:

    Convert() = delete;
    Convert(const Convert &) = delete;
    Convert(const Convert &&) = delete;
    Convert& operator = (const Convert &) = delete;
    Convert& operator = (const Convert &&) = delete;
    ~Convert() = delete;

    static std::string to_hexadecimal(const std::string &str);
    static std::string to_bytes(const std::string &str);
};

#endif // CONVERT_H
