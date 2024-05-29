#include <iostream>
using namespace std;

int main() {
	for (int i = 2; i < 10; i++) {
		int j = 1;
		while (1) {
			cout << i << " * " << j << " = " << i * j << endl;
			j++;

			if (j > 9)
				break;
		}
		cout << endl;
	}

	return 0;
}