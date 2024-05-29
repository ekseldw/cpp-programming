#include <iostream>
using namespace std;

int Add(int a, int b) {
	return a + b;
}

int main() {
	int a, b;

	switch (Add(1, 2)) { // 3
		case 0:
			cout << 0 << endl;
			break;
		case 1:
			cout << 1 << endl;
			break;
		case 2:
			cout << 2 << endl;
			break;
		case 3:
			a = 3;
			b = 7;
			if (1)
				cout << Add(a, b) << endl;
			break;
		case 4:
			a = 30;
			b = 70;
			if (1)
				cout << Add(a, b) << endl;
			break;
	}

	return 0;
}