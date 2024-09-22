#include <iostream>
using namespace std;

class CParent {
public:
	CParent() {
		m_Value = 0;
	}

	~CParent() {
		m_Value = 0;
	}

	int m_Value;
};

class CTest : public CParent {
public:
	CTest() {
		m_Value = 1;
	}

	~CTest() {
		cout << m_Value << endl;
	}
};

void main() {
	CTest t;
}