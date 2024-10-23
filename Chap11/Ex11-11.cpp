#include <iostream>
using namespace std;

class CTest {
public:
	CTest(int arg) {
		m_Value = arg;
	}

	int m_Value;
};

int operator || (const CTest& arg1, const CTest& arg2) {
	return arg1.m_Value + arg2.m_Value;
}

void main() {
	CTest t1(1);
	CTest t2(2);

	cout << (t1 || t2) << endl;
}