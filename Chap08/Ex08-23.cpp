#include <iostream>
using namespace std;

int Func(int arg) {
    return arg;
}

double Func(int arg) { // Error
    return (double)arg;
}

void main() {
    Func(1);
}