//
// Created by xRockmetalx
//

#ifndef WSTRING_H
#define WSTRING_H

#include <codecvt>

class WString {
public:

    using convert = std::codecvt_utf8<wchar_t>;

    WString() = delete;
    WString(const WString &) = delete;
    WString(const WString &&) = delete;
    WString& operator = (const WString &) = delete;
    WString& operator = (const WString &&) = delete;
    ~WString() = delete;

    static std::string to_string(const std::wstring &wstr);
    static std::wstring to_wstring(const std::string &str);
};

#endif // WSTRING_H
