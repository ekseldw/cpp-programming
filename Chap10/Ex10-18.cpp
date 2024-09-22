#include <iostream>
using namespace std;

class CTest {
public:
	CTest() : m_V3(3) {
		m_V1 = 1;
	}

	int m_V1;
	int m_V2 = 2;
	int m_V3;
};

void main() {
	CTest t;
	cout << t.m_V1 << " " << t.m_V2 << " "<< t.m_V3 << endl;
}