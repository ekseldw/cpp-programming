#include <iostream>
using namespace std;

void main() {
    double Result = Multiply(3.3, 7,7); // Error
    cout << Result << endl;
}

double Multiply(double a, double b) {
    return a * b;
}