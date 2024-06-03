#include <iostream>
using namespace std;

int Add(const int& a, const int& b) {
    return a + b;
}

void main() {
    int a = 1;
    int b = 2;

    cout << Add(a, b) << endl; // OK
    cout << Add(1, 2) << endl; // OK
}