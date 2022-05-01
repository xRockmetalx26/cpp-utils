//
// Created by xRockmetalx
//

#ifndef STRINGS_H
#define STRINGS_H

#include <string>
#include <vector>

namespace Strings {
    std::string replace(const std::string &str, const std::string &old_value, const std::string &new_value);
    std::vector<std::string> split(const std::string& str, const std::string &delim);
    std::vector<std::string> filter(const std::vector<std::string> &vect, const std::string &term = " ", bool sensitive = false);

    std::string to_lower(const std::string &str);
    std::string to_upper(const std::string &str);

    std::string trim(const std::string &str);
    std::string left_trim(const std::string &str);
    std::string right_trim(const std::string &str);

    bool iquals(const std::string &str1, const std::string &str2);
    bool contains(const std::string &str, const std::string &term, const bool sensitive = true);
};

#endif // STRINGS_H
