#include <iostream>
using namespace std;

class CTest {
	char arr[16];
};

void main() {
	CTest t;

	CTest* pT = &t;
	cout << pT << endl;

	pT++;
	cout << pT << endl;

	pT++;
	cout << pT << endl;
}