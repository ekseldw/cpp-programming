#include <iostream>
using namespace std;

class CTest {
public:
	CTest operator + (int arg) {				// 내부 정의
		CTest t;
		t.m_Value = m_Value + arg;
		return t;
	}

	CTest operator + (const CTest& arg);		// 외부 정의

	int m_Value = 0;
};

CTest CTest::operator + (const CTest& arg) {	// 외부 정의
	CTest t;
	t.m_Value = m_Value + arg.m_Value;
	return t;
}

void main() {
	CTest t1;
	t1.m_Value = 1;

	CTest t2;
	t2.m_Value = 2;

	CTest s = t1 + t2 + 3;
	cout << s.m_Value << endl;
}