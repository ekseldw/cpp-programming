#include <iostream>
using namespace std;

int GetTrue() {
	cout << "GetTrue is called" << endl;
	return 1;
}

int GetFalse() {
	cout << "GetFalse is called" << endl;
	return 0;
}

void main() {
	if (GetTrue() || GetFalse()) {
		cout << "|| Short Circuit" << endl;
	}

	if (!(GetFalse() && GetTrue())) {
		cout << "&& Short Circuit" << endl;
	}
}