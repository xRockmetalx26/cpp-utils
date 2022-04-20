//
// Created by xRockmetalx
//

#ifndef TIMER_H
#define TIMER_H

#include <chrono>

class Timer {
public:
    using clock = std::chrono::high_resolution_clock;
    using time_point = std::chrono::time_point<clock>;

    std::int64_t elapsed_time();

    void reset();

    void pause(bool pause);

    bool is_paused() const;

private:

    time_point _start{clock::now()};
    time_point _end{_start};

    bool _paused{false};
};

#endif // TIMER_H
