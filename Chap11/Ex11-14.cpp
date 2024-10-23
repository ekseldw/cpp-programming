#include <iostream>
using namespace std;

class CFactorial {
public:
	int operator()(int arg) {
		if (arg > 1) {
			return arg * operator()(arg - 1);
		}
		else {
			return 1;
		}
	}
};

void main() {
	CFactorial func;
	cout << func(5) << endl;		// 120
}