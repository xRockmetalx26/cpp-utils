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

class Test {
public:

    Test() { std::cout << "()" << std::endl;}
    Test(const Test &) { std::cout << "COPY ()" << std::endl;}
    Test(const Test &&) { std::cout << "MOVE ()" << std::endl;}
    Test& operator = (const Test &) { std::cout << "COPY =" << std::endl;}
    Test& operator = (const Test &&) { std::cout << "MOVE =" << std::endl;}
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
    std::cout << time << ", " << timer.elapsed_time() << std::endl;
}

int main() {
    std::cout << Strings::replace("afsfasdfaasdaadbsdfsaylkgnaogba", "a", "\\") << ":" << std::endl;

    return 0;
}
