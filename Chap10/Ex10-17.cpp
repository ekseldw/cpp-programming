#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {}
	
	explicit CTest(int arg) {
		m_Value = arg;
	}

	CTest& operator + (const CTest& obj) {
		m_Value += obj.m_Value;
		return *this;
	}

	int m_Value;
};

void main() {
	CTest t1 = 1;		// Error
	CTest t2(1);		// OK

	t2 = t2 + 1;		// Error
	t2 = t2 + CTest(1);	// OK
}