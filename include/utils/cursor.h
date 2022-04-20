//
// Created by xRockmetalx
//

#ifndef CURSOR_H
#define CURSOR_H

#include <cstddef>

class Cursor {
public:

    Cursor() = delete;
    Cursor(const Cursor &) = delete;
    Cursor(const Cursor &&) = delete;
    Cursor& operator = (const Cursor &) = delete;
    Cursor& operator = (const Cursor &&) = delete;
    ~Cursor() = delete;

    static void set_position(std::size_t x, std::size_t y);
};

#endif // CURSOR_H
