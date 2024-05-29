#include <iostream>
using namespace std;

int NOT(int arg) {
	return arg ? 0 : 1;
}

int main() {
	cout << NOT(3) << " " << NOT(0) << endl;

	return 0;
}