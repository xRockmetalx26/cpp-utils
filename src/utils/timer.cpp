#include <utils/timer.h>

std::int64_t Timer::elapsed_time() {
    if(not _paused) {
        _end = clock::now();
    }

    return std::chrono::duration_cast<std::chrono::microseconds>(_end - _start).count();
}

void Timer::reset() {
    _start = _end = clock::now();
}

void Timer::pause(const bool pause) {
    if(pause) {
        if(not _paused) {
            _end = clock::now();
        }
    }
    else {
        if(not _paused) {
            _start += clock::now() - _end;
            _end = clock::now();
        }
    }

    _paused = pause;
}

bool Timer::is_paused() const {
    return _paused;
}
