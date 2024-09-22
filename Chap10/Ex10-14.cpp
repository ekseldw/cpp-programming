#include <iostream>
using namespace std;

class CTest {
public:
	int m_Value;
};

void main() {
	int i = 3.14;		// OK
	double d = 1;		// OK

	CTest t1 = 3.14;	// Error
	CTest t2 = 1;		// Error
}