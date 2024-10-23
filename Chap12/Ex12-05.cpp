#include <iostream>
using namespace std;

class CTest {
	friend void main();
	friend class COther;

private:
	int m_Value;
};

class COther {
public:
	void Func(CTest& obj) {
		obj.m_Value++;
	}
};

void main() {
	CTest t;
	t.m_Value = 1;

	COther o;
	o.Func(t);

	cout << t.m_Value << endl;
}