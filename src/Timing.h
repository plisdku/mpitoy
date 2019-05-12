#ifndef _TIMING_
#define _TIMING_

#include <chrono>
#include <cstdint>


class Timing
{
public:
    Timing()
    {
        tic();
    }
    
    void tic()
    {
        mStart = std::chrono::steady_clock::now();
    }
    
    std::uint64_t toc()
    {
        auto end = std::chrono::steady_clock::now();
        
        std::uint64_t usElapsed = (end - mStart)/std::chrono::microseconds(1);
        
        return usElapsed;
    }
private:
    std::chrono::time_point<std::chrono::steady_clock> mStart;
};

#endif
