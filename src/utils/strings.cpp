#include <utils/strings.h>

#include <cstddef>
#include <ctype.h>
#include <ranges>
#include <algorithm>
#include <iostream>
#include <utils/vectors.h>

std::vector<std::string> Strings::split(const std::string &str, const std::string &delim) {
    auto to_str = [](auto&& rng) {
        return std::string{ &*std::begin(rng), static_cast<std::size_t>(std::ranges::distance(rng)) };
    };

    const auto ranges{ std::views::split(str, delim) | std::views::transform(to_str) };

    return std::vector<std::string>{ std::ranges::begin(ranges), std::ranges::end(ranges) };
}

std::vector<std::string> Strings::filter(const std::vector<std::string> &vect, const std::string &term, const bool sensitive) {
    auto ranges = std::views::filter(vect, [term, sensitive](auto &&str) {
        return Strings::contains(str, term, sensitive);
    });

    return std::vector<std::string>{ std::begin(ranges), std::end(ranges) };
}

std::string Strings::to_lower(const std::string &str) {
    auto ranges = std::views::transform(str, [](char c) {
        return static_cast<char>(std::tolower(c));
    });

    return std::string{ std::ranges::begin(ranges), std::ranges::end(ranges) };
}

std::string Strings::to_upper(const std::string &str) {
    auto ranges = std::views::transform(str, [](char c) {
        return static_cast<char>(std::toupper(c));
    });

    return std::string{ std::ranges::begin(ranges), std::ranges::end(ranges) };
}

bool Strings::contains(const std::string &str, const std::string &term, const bool sensitive) {
    if(sensitive) {
        return str.find(term) != std::string::npos;
    }

    return Strings::to_lower(str).find(Strings::to_lower(term)) != std::string::npos;
}

bool Strings::iquals(const std::string &str1, const std::string &str2) {
    return std::equal(std::begin(str1), std::end(str1), std::begin(str2), [](char c1, char c2) {
        return std::tolower(c1) == std::tolower(c2);
    });
}
