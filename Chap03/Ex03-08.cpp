#include <iostream>
using namespace std;

int main() {
	float a = 3.7;
	float b = 7.3;

	*(int*)&a = *(int*)&a ^ *(int*)&b;
	*(int*)&b = *(int*)&a ^ *(int*)&b;
	*(int*)&a = *(int*)&a ^ *(int*)&b;
	cout << a << " " << b << endl;

	return 0;
}