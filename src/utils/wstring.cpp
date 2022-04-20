#include <utils/wstring.h>

#include <locale>

std::string WString::to_string(const std::wstring &wstr) {
    return std::wstring_convert<convert, wchar_t>{}.to_bytes(wstr);
}

std::wstring WString::to_wstring(const std::string &str) {
    return std::wstring_convert<convert, wchar_t>{}.from_bytes(str);
}
