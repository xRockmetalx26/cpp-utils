//
// Created by xRockmetalx
//

#ifndef RANDOM_H
#define RANDOM_H

#include <random>
#include <cstddef>

class Random {
public:

    auto get_value(std::int64_t min, std::int64_t max);

private:

    std::random_device _random_device{};
    std::mt19937_64 _generator{_random_device()};
};

#endif // RANDOM_H
