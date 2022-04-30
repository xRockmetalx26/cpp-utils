//
// Created by xRockmetalx
//

#ifndef VECTORS_H
#define VECTORS_H

#include <iostream>
#include <vector>

namespace Vectors {
    template<class T>
    static bool contains(const std::vector<T> &vect, const T &value);

    template<class TI, class TO>
    static std::vector<TO> convert(const std::vector<TI> &vect);

    template<class T>
    static void print(const std::vector<T> &vect, std::ostream &os = std::cout);
};

#include <utils/tcc/vectors.tcc>

#endif // VECTORS_H
