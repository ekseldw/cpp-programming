#include <iostream>
using namespace std;

int main() {
	unsigned char uc;

	uc = 2;
	uc = uc >> 1;
	cout << +uc << endl;

	uc = 130;
	uc = uc >> 1;
	cout << +uc << endl;

	return 0;
}