#include <iostream>
using namespace std;

void func(int arg[4]) {
    cout << sizeof(arg) << endl;
}

void main() {
    int arr[4] = {1, 2, 3, 4};
    func(arr);
}