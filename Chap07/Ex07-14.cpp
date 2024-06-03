#include <iostream>
using namespace std;

typedef union {
    int a;
    int b;
    int c;
} UType;

void main() {
    UType u;
    u.a = 1;

    cout << u.b << endl; // 1 출력
    cout << u.c << endl; // 1 출력
}