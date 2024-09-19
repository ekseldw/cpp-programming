#include <iostream>
using namespace std;

class CTest {
public:
	int m_I;
	static int s_I;
};

int CTest::s_I = 2;

void main() {
	CTest t1;
	t1.m_I = 1;
	t1.s_I = 2;		// CTest::s_I = 2;

	CTest t2;
	t2.m_I = 3;
	t2.s_I = 4;		// CTest::s_I = 4;

	cout << "t1: " << t1.m_I << " " << t1.s_I << endl;
	cout << "t2: " << t2.m_I << " " << t2.s_I << endl;
}