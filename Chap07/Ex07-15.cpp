#include <iostream>
using namespace std;

typedef union {
    __int64 a;
    int b;
} UType;

void main() {
    UType u;
    u.a = 1;

    cout << u.b << endl; // 1 출력
    cout << sizeof(u) << endl; // 8 출력
}