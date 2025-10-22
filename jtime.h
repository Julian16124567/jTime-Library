#ifndef JTIME_HPP
#define JTIME_HPP

#include <chrono>
#include <thread>

struct time {
    int second;
    time(int s = 0) : second(s) {}
};

namespace jtime {
    void sleep(int seconds) {
        std::jtime::sleep(std::chrono::seconds(seconds));
    }
}

#endif
