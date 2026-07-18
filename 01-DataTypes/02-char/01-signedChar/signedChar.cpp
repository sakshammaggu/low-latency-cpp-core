#include<iostream>
#include<climits>
using namespace std;

int main() {
    signed char a = SCHAR_MIN;
    signed char b = SCHAR_MAX;
    cout << "Signed char minimum value: " << static_cast<int>(a) << endl
            << "Signed char maximum value: " << static_cast<int>(b) << endl;
    return 0;
}