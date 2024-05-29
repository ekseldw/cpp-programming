#include <iostream>
using namespace std;

void main() {
	char* pC = NULL;
	int* pI = NULL;
	double* pD = NULL;

	cout << (void*)(pC + 1) << endl;
	cout << (void*)(pI + 1) << endl;
	cout << (void*)(pD + 1) << endl;
}