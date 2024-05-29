#include <iostream>
using namespace std;

void main() {
	int a;
	int* p = &a;
	int** pp = &p;

	**pp = 3;
	cout << a << endl;
}