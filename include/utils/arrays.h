//
// Created by xRockmetalx
//

#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>
#include <cstddef>

template<class T>
namespace Arrays {
    static T* create_array(std::size_t size);
    static T** create_matrix(std::size_t rows, std::size_t columns);

    static void delete_array(T *array);
    static void delete_matrix(T **matrix);

    static void print_array(T *first, T *last, std::ostream &os = std::cout);
    static void print_matrix(T **first, T **last, std::size_t columns, std::ostream &os = std::cout);
};

#include <utils/tcc/arrays.tcc>

#endif // ARRAYS_H
