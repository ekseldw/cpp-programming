#include <iostream>
using namespace std;

void Func(unsigned int arg) {
    cout << "unsigned int: " << arg << endl;
}

void Func(int arg) {
    cout << "int: " << arg << endl;
}

void main() {
    Func(1);
    Func(2u); // (unsigned int)2
}