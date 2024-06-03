#include <iostream>
using namespace std;

void main() {
    int arr[2] = {1, 2};
    // int* p = &arr; // Error
    int (*p)[2] = &arr;
    cout << (*p)[0] << ", " << (*p)[1] << endl;
}