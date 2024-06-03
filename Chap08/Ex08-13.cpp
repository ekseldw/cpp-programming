#include <iostream>
using namespace std;

int Increment(int arg, int delta = 1) {
    return arg + delta;
}

void main() {
    cout << Increment(3) << endl;
    cout << Increment(3, 2) << endl;
}