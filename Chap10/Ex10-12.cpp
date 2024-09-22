#include <iostream>
using namespace std;

class CChild {
public:
	CChild() {
		cout << "CChild Constructor" << endl;
	}

	CChild(const CChild& obj) {
		cout << "CChild Copy Constructor" << endl;
	}
};

class CTest {
public:
	CTest() {
	}

	CTest(const CTest& obj) {
	}

	int m_Value;
	CChild m_Child;
};

void main() {
	CTest t;			// CChild Constructor
	t.m_Value = 1;
	CTest t1 = t;		// CChild Copy Constructor
}