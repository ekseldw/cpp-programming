#include <iostream>
using namespace std;

int main() {
	goto TARGET;
	cout << "Start" << endl;

TARGET:
	cout << "Target" << endl;

	return 0;
}