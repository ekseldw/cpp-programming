#include <iostream>
using namespace std;

class CChild {
public:
	CChild() {
		cout << "CChild Constructor" << endl;
	}

	CChild(int arg) {
		cout << arg << " CChild(int arg) Constructor" << endl;
	}

	~CChild() {
		cout << "CChild Destructor" << endl;
	}
};

class CTest {
public:
	CTest() : m_Child(7) {

	}

	CChild m_Child;
};

void main() {
	CTest t;		// CChild Constructor
}