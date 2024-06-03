#include <iostream>
using namespace std;

void main() {
    int arr[2] = {1, 2};
    int* p = arr;
    cout << *p << ", " << *arr << endl;
}