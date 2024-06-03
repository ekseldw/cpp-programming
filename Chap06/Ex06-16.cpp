#include <iostream>
using namespace std;

void func(int arg) {
    arg++;
    cout << arg << endl;
}

void main() {
    int a = 1;
    func(a);
    cout << a << endl;
}