//
// Created by xRockmetalx
//

#ifndef MATRIXS_H
#define MATRIXS_H

#include <cstddef>
#include <string>

namespace Matrixs {
    template<class T>
    T** create_matrix(std::size_t rows, std::size_t columns);

    template<class T>
    void delete_matrix(T **matrix);

    template<class T>
    std::string to_string(T **first, T **last, std::size_t columns);
};

#include <utils/tcc/matrixs.tcc>

#endif // MATRIXS_H
