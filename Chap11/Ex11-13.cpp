#include <iostream>
using namespace std;

class CMember {
public:
	int m_Value;
};

class CTest {
public:
	CMember* operator->() {
		return &m_Member;
	}

	CMember m_Member;
};

void main() {
	CTest t;
	t->m_Value = 1;

	cout << t.m_Member.m_Value << endl;
}