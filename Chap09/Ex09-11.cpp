#include <iostream>
using namespace std;

class CTest {
public:
	static void SFunc() {
		cout << "SFunc" << endl;		// OK
	}
};

void main() {
	CTest t;
	t.SFunc();							// OK

	CTest* pT = &t;
	pT->SFunc();						// OK

	CTest::SFunc();						// OK
}