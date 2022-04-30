//
// Created by xRockmetalx
//

#ifndef WSTRING_H
#define WSTRING_H

#include <codecvt>

namespace WString {
    using convert = std::codecvt_utf8<wchar_t>;

    static std::string to_string(const std::wstring &wstr);
    static std::wstring to_wstring(const std::string &str);
};

#endif // WSTRING_H
