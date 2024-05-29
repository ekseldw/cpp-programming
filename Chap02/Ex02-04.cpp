#include <iostream>
using namespace std;

void main() {
	cout << fixed;
	cout.precision(0);

	float f = 67108864 + 4;
	cout << f << endl;

	__int64 i64 = 67108864 + 4;
	cout << i64 << endl;
}