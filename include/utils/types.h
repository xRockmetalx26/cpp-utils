//
// Created by xRockmetalx
//

#ifndef TYPES_H
#define TYPES_H

#include <string>

class Types {
public:

    Types() = delete;
    Types(const Types &) = delete;
    Types(const Types &&) = delete;
    Types& operator = (const Types &) = delete;
    Types& operator = (const Types &&) = delete;
    ~Types() = delete;

    static bool is_double(const std::string &std_string);
};

#endif // TYPES_H
