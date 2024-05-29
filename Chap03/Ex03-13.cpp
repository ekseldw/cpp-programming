#include <iostream>
using namespace std;

int main() {
	cout << sizeof(char) << endl;
	cout << sizeof(int) << endl;
	cout << sizeof(double) << endl;

	char c;
	int i;
	double d;
	int arr[4];

	cout << sizeof(c) << endl;
	cout << sizeof(i) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(arr) << endl;

	return 0;
}