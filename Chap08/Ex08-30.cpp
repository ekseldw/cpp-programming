#include <iostream>
using namespace std;

void Func(short arg) {
    cout << "short: " << arg << endl;
}

void Func(int arg) {
    cout << "int: " << arg << endl;
}

void Func(__int64 arg) {
    cout << "__int64: " << arg << endl;
}

void main() {
    Func((short)1);
    Func(2);
    Func((__int64)3); // 3LL
}