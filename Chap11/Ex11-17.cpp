#include <iostream>
using namespace std;

class CChild {
public:
	CChild& operator=(const CChild& obj) {
		m_Value = 3;
		return *this;
	}

	int m_Value;
};

class CTest {
public:
	int m_Value;
	CChild m_Child;
};

void main() {
	CTest t;
	t.m_Value = 1;
	t.m_Child.m_Value = 2;

	CTest t1;
	t1 = t;
	cout << t1.m_Value << t1.m_Child.m_Value << endl;
}