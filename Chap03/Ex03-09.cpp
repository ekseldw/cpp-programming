#include <iostream>
using namespace std;

int main() {
	char c = 1;

	c = c << 7;
	cout << +c << endl;

	c = c >> 7;
	cout << +c << endl;

	return 0;
}