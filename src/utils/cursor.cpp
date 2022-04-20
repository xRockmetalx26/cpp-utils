#include <utils/cursor.h>

#include <cstdio>

void Cursor::set_position(const std::size_t x, const std::size_t y) {
    std::printf("%c[%llu;%lluf", 0x1B, y, x);
};
