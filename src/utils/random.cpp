#include <utils/random.h>

auto Random::get_value(const std::int64_t min, const std::int64_t max) {
    return std::uniform_int_distribution<std::int64_t>{min, max}(_generator);
};
