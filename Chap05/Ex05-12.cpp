#include <iostream>
using namespace std;

void main() {
	int i;
	void* p = &i;

	// *p = 1;    // Error
	*(int*)p = 1; // OK
}