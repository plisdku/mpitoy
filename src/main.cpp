#include <iostream>
#include <chrono>
#include <thread>
#include <stdexcept>
#include <sstream>
#include <cmath>
#include <vector>

#include "Timing.h"

void sleepns(int ns)
{
    std::this_thread::sleep_for(std::chrono::nanoseconds(ns));
}
void sleepus(int ns)
{
    std::this_thread::sleep_for(std::chrono::microseconds(ns));
}
void sleepms(int ns)
{
    std::this_thread::sleep_for(std::chrono::milliseconds(ns));
}

int main(int argc, const char** argv)
{
    std::cout << "Hello, world\n";
}
