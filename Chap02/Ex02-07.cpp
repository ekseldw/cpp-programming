#include <iostream>
using namespace std;

void main() {
	char str1[8] = "C++";
	char str2[] = "C++";

	char str3[8];
	// str3 = "C++"; // Error

	cout << str1 << endl << str2 << endl;
}