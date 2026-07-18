#include<iostream>
using namespace std;

int main() {
    unsigned int a = -10; // unsigned integer
    cout << "Value of a: " << a << endl;
    cout << "Size of a: " << sizeof(a) << " bytes" << endl;
    cout << "Size of signed int: " << sizeof(unsigned int) << " bytes" << endl;
    return 0;
}