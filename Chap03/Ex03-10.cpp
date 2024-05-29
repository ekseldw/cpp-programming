#include <iostream>
using namespace std;

int main() {
	char c;

	c = 2;
	c = c >> 1;
	cout << +c << endl;

	c = -126;
	c = c >> 1;
	cout << +c << endl;

	return 0;
}