#include <bits/stdc++.h>

#include <utils/timer.h>
#include <utils/arrays.h>
#include <utils/random.h>
#include <utils/strings.h>
#include <utils/files.h>
#include <utils/crypto/aes.h>
#include <utils/crypto/sha.h>
#include <utils/crypto/convert.h>
#include <utils/types.h>
#include <utils/vectors.h>
#include <utils/matrixs.h>

class Test {
public:

    Test() {
        std::cout << "()" << std::endl;
    }

    Test(const Test &) {
        std::cout << "COPY ()" << std::endl;
    }

    Test(const Test &&) {
        std::cout << "MOVE ()" << std::endl;
    }

    Test& operator = (const Test &) {
        std::cout << "COPY =" << std::endl;
        return *this;
    }

    Test& operator = (const Test &&) {
        std::cout << "MOVE =" << std::endl;
        return *this;
    }
};

void test_timer() {
    Timer timer{};
    std::size_t time{};
    std::string data = "";

    timer.reset();
    //time = file_size1("data/data");
    std::cout << time << ", " << timer.elapsed_time() << std::endl;

    timer.reset();
    //time = file_size2("data/data");
    std::cout << time << ", ssss" << timer.elapsed_time() << std::endl;
}

int main() {
    auto matrix = Matrixs::create_matrix<int>(4,4);

    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[0][3] = 4;
    matrix[1][0] = 5;
    matrix[1][1] = 6;
    matrix[1][2] = 7;
    matrix[1][3] = 8;
    matrix[2][0] = 9;
    matrix[2][1] = 10;
    matrix[2][2] = 11;
    matrix[2][3] = 12;
    matrix[3][0] = 13;
    matrix[3][1] = 14;
    matrix[3][2] = 15;
    matrix[3][3] = 16;

    std::cout << Matrixs::to_string<int>(matrix, matrix + 4, 0) << std::endl;

    return 0;
}
