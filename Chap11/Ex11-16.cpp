#include <iostream>
using namespace std;

class CParent {
public:
	CParent& operator=(const CParent& obj) {
		m_Parent = 3;
		return *this;
	}

	int m_Parent;
};

class CTest : public CParent {
public:
	int m_Value;
};

void main() {
	CTest t;
	t.m_Parent = 1;
	t.m_Value = 2;

	CTest t1;
	t1 = t;
	cout << t1.m_Parent << t1.m_Value << endl;
}