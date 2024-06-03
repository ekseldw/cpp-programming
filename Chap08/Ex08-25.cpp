#include <iostream>
using namespace std;

void Func(int* arg) {
    cout << "int* " << endl;
}

void Func(const int* arg) {
    cout << "const int* " << endl;
}

void main() {
    int a = 1;
    Func(&a);

    const int ca = 1;
    Func(&ca);
}