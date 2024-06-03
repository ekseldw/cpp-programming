#include <iostream>
using namespace std;

void func(int arg[2][3]) {
    arg[1][2] = 1;
}

void main() {
    int arr[2][3] = {{0}};
    func(arr);
    cout << arr[1][2] << endl;
}