#include <iostream>
using namespace std;

void main() {
	int a;
	int& ra = a;

	ra = 1;
	cout << a << endl;
}