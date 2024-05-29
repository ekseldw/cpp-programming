#include <iostream>
using namespace std;

int main() {
	cout << fixed;
	cout.precision(0);

	int i = 3.141592;
	float f = 3.141592;

	cout << i << " " << f << endl;

	return 0;
}