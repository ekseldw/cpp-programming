#include <iostream>
using namespace std;

void Func(char* arg) {
    cout << "char* " << arg << endl;
}

void Func(const char* arg) {
    cout << "const char* " << arg << endl;
}

void main() {
    char* p = "A";
    Func(p);

    Func("B");
}