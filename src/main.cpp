#include <iostream>
#include <thread>
#include <sstream>
#include <iomanip>

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
#include <ranges>

int main() {
    Timer timer{};
    const auto data = Files::read_file("data/data");

    timer.reset();

    std::cout << timer.elapsed_time() << std::endl;

    std::cout << timer.elapsed_time() << std::endl;

    return 0;
}
