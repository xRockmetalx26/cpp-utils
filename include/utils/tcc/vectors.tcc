#include <utils/vectors.h>

#include <algorithm>

template<class T>
bool Vectors::contains(const std::vector<T> &vect, const T &value) {
    return std::find(std::begin(vect), std::end(vect), value) != std::end(vect);
}

template<class TI, class TO>
std::vector<TO> Vectors::convert(const std::vector<TI> &vect) {
    return std::vector<TO>{std::begin(vect), std::end(vect)};
}

template<class T>
void Vectors::print(const std::vector<T> &vect, std::ostream &os) {
    os << "[";

    for(const auto &value: vect) {
        os << value << ", ";
    }

    if(vect.empty()) {
        os << "]" << std::endl;
    }
    else {
        os << "\b\b]" << std::endl;
    }
}
