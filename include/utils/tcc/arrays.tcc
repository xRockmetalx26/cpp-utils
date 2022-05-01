#include <utils/arrays.h>

template<class T>
T* Arrays::create_array(const std::size_t size) {
    return new T[size]{};
}

template<class T>
T** Arrays::create_matrix(const std::size_t rows, const std::size_t columns) {
    T **matrix{new T*[rows]{}};

    *matrix = new T[rows * columns]{};

    for(std::size_t i{1}; i < rows; i++) {
        matrix[i] = *matrix + columns * i;
    }

    return matrix;
}

template<class T>
void Arrays::delete_array(T *array) {
    delete[] array;
}

template<class T>
void Arrays::delete_matrix(T **matrix) {
    delete[] *matrix;
    delete[] matrix;
}

template<class T>
void Arrays::print_array(T *begin, T *end, std::ostream &os) {
    while(begin != end) {
        os << *begin++ << ", ";
    }

    os << '\n';
}

template<class T>
void Arrays::print_matrix(T **first, T **last, const std::size_t columns, std::ostream &os) {
    while(first != last) {
        for(std::size_t i{0}; i < columns; i++) {
            os << (*first)[i] << ", ";
        }

        first++;
        os << '\n';
    }

    os << '\n';
}
