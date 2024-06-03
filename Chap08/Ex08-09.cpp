#include <iostream>
using namespace std;

void Increment(int* pArg) {
    (*pArg)++;
}

void main() {
    int i = 3;
    Increment(&i);
    cout << i << endl; // 4 출력
}