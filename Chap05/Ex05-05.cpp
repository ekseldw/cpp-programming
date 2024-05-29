#include <iostream>
using namespace std;

void main() {
	int a = 0;
	char* s = (char*)&a;

	*(s + 0) = 'C';
	*(s + 1) = '+';
	*(s + 2) = '+';
	*(s + 3) = '\0';

	cout << (char*)&a << endl;
}