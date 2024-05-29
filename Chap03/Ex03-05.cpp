#include <iostream>
using namespace std;

int Func() {
	cout << "Func" << endl;
	return 1;
}

int main() {
	if (0 || Func()) {
		cout << "main" << endl;
	}

	return 0;
}