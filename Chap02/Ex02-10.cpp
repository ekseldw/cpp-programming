#include <iostream>
using namespace std;

void main() {
	int a = 3;
	int* pa = &a;

	cout << pa << endl << *pa << endl;
}