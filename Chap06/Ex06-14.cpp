#include <iostream>
using namespace std;

void main() {
    int arr[2][3] = {{11, 12, 13}, {21, 22, 23}};
    int (*pp)[3] = arr;
    cout << pp[1][2] << endl;
}