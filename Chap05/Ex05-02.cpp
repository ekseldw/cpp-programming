#include <iostream>
using namespace std;

void main() {
	int a;
	int* p = &a;
	*p = 1;
	cout << a << endl;
}