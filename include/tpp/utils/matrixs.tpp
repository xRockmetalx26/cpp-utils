#include <utils/matrixs.h>

template<class T>
T** Matrixs::create_matrix(const std::size_t rows, const std::size_t columns) {
    T **matrix{new T*[rows]{}};

    *matrix = new T[rows * columns]{};

    for(std::size_t i{1}; i < rows; i++) {
        matrix[i] = *matrix + columns * i;
    }

    return matrix;
}

template<class T>
void Matrixs::delete_matrix(T **matrix) {
    delete[] *matrix;
    delete[] matrix;
}

template<class T>
std::string Matrixs::to_string(T **first, T **last, std::size_t columns) {
    if(first == last) {
        return std::string{ "[]" };
    }

    std::ostringstream stream{};
    stream << "[";

    while(first != last) {
        auto first_2 = *first;
        auto last_2 = *first++ + columns;

        stream << "[";

        if(first_2 != last_2) {
            while(first_2 != last_2) {
                stream << *first_2++ << ", ";
            }

            stream.seekp(static_cast<std::size_t>(stream.tellp()) - 2);
        }

        stream << "], ";
    }

    stream << "]";

    return stream.str();
}
