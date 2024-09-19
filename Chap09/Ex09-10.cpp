#include <iostream>
using namespace std;

class CTest {
public:
	int m_Value;

	void Func() {
		cout << m_Value << endl;	// OK
	}

	static void SFunc() {
		cout << m_Value << endl;	// Error
	}
};