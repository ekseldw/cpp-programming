#include <iostream>
using namespace std;

class CRadian {
public:
	CRadian() {}

	CRadian(int angle) {
		m_Radian = angle * 3.141592 / 180;
	}

	CRadian& operator + (const CRadian& obj) {
		m_Radian += obj.m_Radian;
		return *this;
	}

	double m_Radian;
};

void main() {
	CRadian r;
	r.m_Radian = 1;

	r = r + 1;
	cout << r.m_Radian << endl;		// 1.01745 Ãâ·Â
}