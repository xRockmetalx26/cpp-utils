//
// Created by xRockmetalx
//

#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>
#include <cstddef>

namespace Arrays {
    template<class T>
    T* create_array(std::size_t size);

    template<class T>
    T** create_matrix(std::size_t rows, std::size_t columns);


    template<class T>
    void delete_array(T *array);

    template<class T>
    void delete_matrix(T **matrix);


    template<class T>
    void print_array(T *first, T *last, std::ostream &os = std::cout);

    template<class T>
    void print_matrix(T **first, T **last, std::size_t columns, std::ostream &os = std::cout);
};

#include <utils/tcc/arrays.tcc>

#endif // ARRAYS_H
