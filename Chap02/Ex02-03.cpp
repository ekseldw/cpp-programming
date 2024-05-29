#include <iostream>
using namespace std;

void main() {
	cout << fixed;
	cout.precision(0);

	for (int i = 0; i < 10; i++) {
		float f = 67108864 + i;
		cout << f << endl;
	}
}