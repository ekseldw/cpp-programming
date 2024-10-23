#include <iostream>
using namespace std;

void main() {
	cout << sizeof(1 + 2) << endl;		// 4
	cout << sizeof(1 + 2.0) << endl;	// 8
	cout << sizeof(1.0 + 2) << endl;	// 8
	cout << sizeof(1.0 + 2.0) << endl;	// 8
}