#include <iostream>
using namespace std;

class CTest {
public:
	CTest(int arg) {
		m_Value = arg;
	}

	int m_Value;
};

void main() {
	CTest t(1);
	cout << t.m_Value << endl;

	cout << CTest(2).m_Value << endl;

	cout << ((CTest)3).m_Value << endl;
}