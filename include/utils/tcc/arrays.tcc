#include <utils/arrays.h>

template<class T>
T* Arrays::create_array(const std::size_t len) {
    return new T[len]{};
}

template<class T>
void Arrays::delete_array(T *array) {
    delete[] array;
}

template<class T>
std::string Arrays::to_string(T *first, T *last) {
    if(first == last) {
        return std::string{ "[]" };
    }

    std::ostringstream stream{ "[" };

    while(first != last) {
        stream << *first++ << ", ";
    }

    stream.seekp(static_cast<std::size_t>(stream.tellp()) - 2);
    stream << "]";

    return stream.str();
}
