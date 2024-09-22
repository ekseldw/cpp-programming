#include <iostream>
using namespace std;

class CParent {
public:
	CParent() {
		cout << "CParent Constructor" << endl;
	}

	CParent(const CParent& obj) {
		cout << "CParent Copy Constructor" << endl;
	}
};

class CTest : public CParent {
public:
	int m_Value;
};

void main() {
	CTest t;			// CParent Constructor
	t.m_Value = 1;
	CTest t1 = t;		// CParent Copy Constructor
}