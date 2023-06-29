#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    //create bitset with value 0b100000
    bitset<16> bits(32);

    cout << bits << endl;

    bits[0] = true;    bits[5] = true;
    bits[10] = true;    bits[12] = true;

    cout << bits << endl;

    //shift two
    bits <<= 2;
    cout << bits << endl;
    cout << bits[3] << endl;


    std::cin.get();
}