#include <iostream>
using namespace std;

void main() {
	char c;
	int i;

	// char* pC = &i; // Error
	char* pC = &c;    // OK

	// int* pI = &c;  // Error
	int* pI = &i;     // OK
}