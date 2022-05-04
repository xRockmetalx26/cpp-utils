//
// Created by xRockmetalx
//

#ifndef VECTORS_H
#define VECTORS_H

#include <iostream>
#include <vector>

namespace Vectors {
    template<class T>
    bool contains(const std::vector<T> &vect, const T &value);

    template<class TI, class TO>
    std::vector<TO> convert(const std::vector<TI> &vect);

    template<class T>
    void print(const std::vector<T> &vect, std::ostream &os = std::cout);
};

#include <tpp/utils/vectors.tpp>

#endif // VECTORS_H
