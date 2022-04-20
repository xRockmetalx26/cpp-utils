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
    test_timer();

    return 0;
}
