#include <iostream>
using namespace std;

class CTest {
public:
	int m_Value;

	void Show() {
		cout << this << endl;
		cout << m_Value << endl;
		cout << this->m_Value << endl;
	}
};

void main() {
	CTest t1;
	t1.m_Value = 3;
	cout << "t1 address: " << &t1 << endl;
	t1.Show();

	CTest t2;
	t2.m_Value = 7;
	cout << "t2 address: " << &t2 << endl;
	t2.Show();
}