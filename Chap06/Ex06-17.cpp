#include <iostream>
using namespace std;

void func(int arg[1]) {
    arg[0]++;
    cout << arg[0] << endl;
}

void main() {
    int arr[1] = {1};
    func(arr);
    cout << arr[0] << endl;
}