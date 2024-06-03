#include <iostream>
using namespace std;

void Func(int arg) {
    cout << "Value" << endl;
}

void Func(int& arg) {
    cout << "Reference" << endl;
}

void main() {
    Func(1); // OK

    int a = 1;
    Func(a); // Error
}