//
// Created by xRockmetalx
//

#ifndef STRINGS_H
#define STRINGS_H

#include <string>
#include <vector>

namespace Strings {
    static std::vector<std::string> split(const std::string& str, const std::string &delim);

    static std::vector<std::string> filter(const std::vector<std::string> &vect, const std::string &term = " ", bool sensitive = false);

    static std::string to_lower(const std::string &str);
    static std::string to_upper(const std::string &str);

    static bool contains(const std::string &str, const std::string &term, const bool sensitive = true);
    static std::string replace(const std::string &str, const std::string &old_value, const std::string &new_value);
    static std::string trim(const std::string &str);
    static std::string left_trim(const std::string &str);
    static std::string right_trim(const std::string &str);

    static bool iquals(const std::string &str1, const std::string &str2);
};

#endif // STRINGS_H
