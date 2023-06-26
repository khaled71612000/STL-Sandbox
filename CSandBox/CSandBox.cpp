// CSandBox.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

static bool s_finished = false;

void DoWork()
{
    while (!s_finished)
    {
        std::cout << "hello..\n";
    }
}

int main()
{
    std::thread worker(DoWork);

    std::cin.get();
    s_finished = true;

    worker.join();

    std::cin.get();
}