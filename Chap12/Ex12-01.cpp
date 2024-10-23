#include <iostream>
using namespace std;

class CParent {
public:
	void Func1() {
		m_Value1 = 1;
	}

	int m_Value1;
};

class CTest : public CParent {
public:
	void Func1() {			// 재정의
		m_Value1 = 2;
	}

	void Func2() {
		m_Value2 = 3;		// 새로 정의
	}

	int m_Value1;			// 재정의
	int m_Value2;			// 새로 정의
};

void main() {
	CTest t;
	t.CParent::Func1();
	t.Func1();
	t.Func2();

	cout << t.CParent::m_Value1 << endl;
	cout << t.m_Value1 << endl;
	cout << t.m_Value2 << endl;
}