#include <utils/crypto/convert.h>

#include <sstream>
#include <iomanip>

std::string Convert::to_hexadecimal(const std::string &str) {
    std::stringstream stream{};

    for(std::size_t i{0}; i < str.size(); i++) {
        stream << std::hex << std::setw(2) << std::setfill('0') << (0xff & (unsigned int) str[i]);
    }

    return stream.str();
}

std::string Convert::to_bytes(const std::string &str) {
    
}
