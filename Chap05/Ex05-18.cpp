#include <iostream>
using namespace std;

void main() {
	const int& ra = 1;
	int* p = (int*)&ra;
	*p = 2;
	cout << ra << endl;
}