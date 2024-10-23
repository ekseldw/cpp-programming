#include <iostream>
using namespace std;

class CTest {
public:
	CTest operator+ (int arg) {
		cout << "Member Operator Function" << endl;
		CTest t;
		t.m_Value = m_Value + arg;
		return t;
	}

	int m_Value = 0;
};

CTest operator+(const CTest& arg1, int arg2) {
	cout << "Global Operator Function" << endl;

	CTest t;
	t.m_Value = arg1.m_Value + arg2;
	return t;
}

void main() {
	CTest t;
	t.m_Value = 1;

	CTest s = t + 2;		// OK - 멤버 연산자 함수 우선
}