#include <iostream>
using namespace std;

void Func(int* arg) {
    cout << "int* " << endl;
}

void Func(int* const arg) { // Error
    cout << "int* const" << endl;
}

void main() {
    int a = 1;
    Func(&a);
}