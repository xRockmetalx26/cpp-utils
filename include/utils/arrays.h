//
// Created by xRockmetalx
//

#ifndef ARRAYS_H
#define ARRAYS_H

#include <iostream>
#include <cstddef>

namespace Arrays {
    template<class T>
    T* create_array(std::size_t len);

    template<class T>
    void delete_array(T **matrix);

    template<class T>
    std::string to_string(T *first, T *last);
};

#include <utils/tcc/arrays.tcc>

#endif // ARRAYS_H
