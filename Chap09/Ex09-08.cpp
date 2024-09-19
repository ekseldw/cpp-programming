#include <iostream>
using namespace std;

class CTest {
public:
	int m_Value;

	void Show() {
		cout << this << endl;
		cout << m_Value << endl;
	}
};

void main() {
	CTest t;
	CTest* pT = &t;
	pT->Show();		// OK

	pT = NULL;
	pT->Show();		// Runtime Error
}