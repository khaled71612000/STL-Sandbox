// CSandBox.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <list>

using namespace std;

int main()
{

    list<char> v;

    for (int i = 0; i < 10; i++)
    {
        v.push_back('A');
    }
    cout << v.size() << endl;

    for (const char& i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    std::cin.get();
}