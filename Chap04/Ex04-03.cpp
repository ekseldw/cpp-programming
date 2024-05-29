#include <iostream>
using namespace std;

#define SWAP(a, b) a ^= b; b ^= a; a ^= b;

int main() {
	int a = 0;
	int b = 1;

	if (0)
		SWAP(a, b);

	cout << a << " " << b << endl;

	return 0;
}