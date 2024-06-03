#include <iostream>
using namespace std;

void Increment(int arg) {
    arg++;
}

void main() {
    int i = 3;
    Increment(i);
    cout << i << endl; // 3 출력
}