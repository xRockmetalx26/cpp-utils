#include <utils/types.h>

#include <sstream>

bool Types::is_double(const std::string &str) {
    std::istringstream stream{str};
    double number;

    stream >> std::noskipws >> number;

    return stream.eof() && not stream.fail(); 
}