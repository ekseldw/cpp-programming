#include <iostream>
using namespace std;

int main() {
	int Sum = 0;
	int i = 0;

	while (i < 11) {
		Sum += i;
		i++;
	}

	cout << Sum << endl;

	return 0;
}