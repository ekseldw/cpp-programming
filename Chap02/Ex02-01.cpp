#include <iostream>
using namespace std;

void main() {
	cout << fixed;
	cout.precision(4);

	float f1 = 8388608.0;
	cout << f1 << endl;

	float f2 = 8388608.5;
	cout << f2 << endl;

	float f3 = 8388608.6;
	cout << f3 << endl;

	float f4 = 8388609.0;
	cout << f4 << endl;
}