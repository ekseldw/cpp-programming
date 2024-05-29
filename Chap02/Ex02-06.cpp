#include <iostream>
using namespace std;

void main() {
	char str[8];
	// memset(str, 'A', 8);

	str[0] = 'C';
	str[1] = '+';
	str[2] = '+';
	str[3] = '\0';
	cout << str << endl;
}