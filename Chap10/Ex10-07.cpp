#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		m_Value = 0;
	}

	CTest(const CTest& obj) {
		m_Value = 2;
	}

	int m_Value;
};

void main() {
	CTest t;
	t.m_Value = 1;

	CTest t1(t);
	CTest t2 = t;
	CTest t3; t3 = t;

	cout << "t1: " << t1.m_Value << endl;
	cout << "t2: " << t2.m_Value << endl;
	cout << "t3: " << t3.m_Value << endl;
}