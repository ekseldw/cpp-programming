#include <iostream>
using namespace std;

int main() {
	int a, b;

	a = 1;
	cout << ++a << endl; // 2

	a = 1;
	b = ++a; // 2
	cout << b << endl;

	a = 1;
	cout << a << endl; // 1

	a = 1;
	b = a++; 
	cout << b << endl; // 1

	a = 1;
	++a;
	cout << a << endl; // 2

	a = 1;
	a++;
	cout << a << endl; // 2

	return 0;
}