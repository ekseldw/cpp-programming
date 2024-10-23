#include <iostream>
using namespace std;

class CTest {
public:
	CTest& operator++()	{			// Prefix
		cout << "Prefix: ";
		m_Value++;
		return *this;
	}

	const CTest operator++(int) {	// Postfix
		cout << "Postfix: ";
		CTest t = *this;
		m_Value++;
		return t;
	}

	int m_Value = 0;
};

void main() {
	CTest t1, t2;

	cout << (++t1).m_Value << endl;		// Prefix
	cout << (t2++).m_Value << endl;		// Postfix
}