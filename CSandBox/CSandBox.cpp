// CSandBox.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a[2];
    a[0] = 0;
    a[1] = 1;

    for (int i = 0; i < 2; i++)
    {
        cout << a[i] << endl;
    }
    cout << endl;

    vector<int> v(2);
    v[0] = 0;
    v[1] = 1;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    cout << endl;

    v.push_back(3);

    for (const int& i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    v.resize(1);
    for (const int& i : v)
    {
        cout << i << endl;
    }
    std::cin.get();
}