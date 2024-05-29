#include <iostream>
using namespace std;

int ONE = 1;
int TWO = 2;
int THREE = 3;

int main() {
	switch (ONE) {
		case 0:
			cout << 0 << endl;
		case 1:
			cout << 1 << endl;
		case 2:
			cout << 2 << endl;
		case 3:
			cout << 3 << endl;
			break;
		case 4:
			cout << 4 << endl;
			break;
	}

	return 0;
}