#include <iostream>
using namespace std;

class CTest {
public:
	void Func() {
		cout << "General Function" << endl;
	}

	void Func() const {
		cout << "Const Function" << endl;
	}
};

void main() {
	CTest t;
	t.Func();

	const CTest ct;
	ct.Func();
}