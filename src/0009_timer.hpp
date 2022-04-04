#ifndef TIMER_HPP
#define TIMER_HPP

#include <chrono>

class Timer
{
public:
    void start()
    {
        startTime = std::chrono::high_resolution_clock::now();
        isRunning = true;
        
    }

    void stop()
    {
        stopTime = std::chrono::high_resolution_clock::now();
        isRunning = false;
    }

    double getElapsedTime()
    {
        if (isRunning)
            this->stop();
        
        return std::chrono::duration_cast <
            std::chrono::milliseconds
        > (stopTime - startTime).count();
    }

private:
    std::chrono::time_point <
        std::chrono::high_resolution_clock
    >  startTime;

    std::chrono::time_point <
        std::chrono::high_resolution_clock
    >  stopTime;

    bool isRunning{false};
};

#endif /* end of include guard :  TIMER_HPP */
