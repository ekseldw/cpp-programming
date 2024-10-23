#include <iostream>
using namespace std;

class CTest {
public:
	CTest& operator=(const CTest& obj) {
		m_Value = 3;
		return *this;
	}

	int m_Value;
};

void main() {
	CTest t1;
	t1.m_Value = 1;

	CTest t2, t3;
	t3 = t2 = t1;

	cout << t1.m_Value << t2.m_Value << t3.m_Value << endl;
}