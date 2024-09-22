#include <iostream>
using namespace std;

class CTest {
public:
	CTest();			// ������ �ܺ� ����
	CTest(int arg) {	// ������ ���� ����
		m_Value = arg;
		cout << m_Value << " CTest(int arg)" << endl;
	}

	~CTest() {
		cout << m_Value << " ~CTest()" << endl;
	}

	int m_Value;
};

CTest::CTest() {		// ������ �ܺ� ����
	m_Value = 1;
	cout << m_Value << " CTest()" << endl;
}

void main() {
	CTest t1;
	CTest t2(2);
}