#include <iostream>
using namespace std;

int Multiply(int a, int b) {
    int Result = a * b;
    return Result;
    Result = 0;
}

void main() {
    int Result = Multiply(3, 4);
    cout << Result << endl; // 12 출력
    return;
}