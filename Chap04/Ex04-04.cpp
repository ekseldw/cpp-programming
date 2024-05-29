#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int b = 1;

	if (0)
		a ^= b;
		b ^= a;
		a ^= b;

	cout << a << " " << b << endl;

	return 0;
}