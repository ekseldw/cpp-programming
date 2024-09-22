#include <iostream>
using namespace std;

class CTest {
public:
	CTest();			// 생성자 외부 정의
	CTest(int arg) {	// 생성자 내부 정의
		m_Value = arg;
		cout << m_Value << " CTest(int arg)" << endl;
	}

	~CTest() {
		cout << m_Value << " ~CTest()" << endl;
	}

	int m_Value;
};

CTest::CTest() {		// 생성자 외부 정의
	m_Value = 1;
	cout << m_Value << " CTest()" << endl;
}

void main() {
	CTest t1;
	CTest t2(2);
}