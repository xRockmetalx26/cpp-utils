//
// Created by xRockmetalx
//

#ifndef STRINGS_H
#define STRINGS_H

#include <string>
#include <vector>

class Strings {
public:

    Strings() = delete;
    Strings(const Strings &) = delete;
    Strings(const Strings &&) = delete;
    Strings& operator = (const Strings &) = delete;
    Strings& operator = (const Strings &&) = delete;
    ~Strings() = delete;

    static std::vector<std::string> split(const std::string& str, const std::string &delim);

    static std::vector<std::string> filter(const std::vector<std::string> &vect, const std::string &term = " ", bool sensitive = false);

    static std::string to_lower(const std::string &str);
    static std::string to_upper(const std::string &str);

    static bool contains(const std::string &str, const std::string &term, const bool sensitive = true);

    static bool iquals(const std::string &str1, const std::string &str2);
};

#endif // STRINGS_H
