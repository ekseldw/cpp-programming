#include <iostream>
using namespace std;

void Mod(int arg, int m);

void Sub(int arg, int m) {
    Mod(arg - m, m); // OK
}

void Mod(int arg, int m) {
    if(arg < m) {
        cout << arg << endl;
    } else {
        Sub(arg, m);
    }
}

void main() {
    Mod(11, 3);
}