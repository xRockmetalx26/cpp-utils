#include <utils/crypto/convert.h>

#include <sstream>
#include <iomanip>

std::string Convert::to_hexadecimal(const std::string &str) {
    std::ostringstream stream{};

    for(auto i = 0ULL; i < str.size(); i++) {
        stream << std::hex << std::setw(2) << std::setfill('0') << (0xffU & (unsigned int) str[i]);
    }

    return stream.str();
}

std::string Convert::to_bytes(const std::string &str) {
    
}
