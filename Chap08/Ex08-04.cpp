#include <iostream>
using namespace std;

void Sub(int arg, int m) {
    Mod(arg - m, m); // Error
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