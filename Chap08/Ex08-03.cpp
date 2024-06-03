#include <iostream>
using namespace std;

double Multiply(double a, double b) {
    return a * b;
}

void main() {
    double Result = Multiply(3.3, 7.7); // OK
    cout << Result << endl;
}