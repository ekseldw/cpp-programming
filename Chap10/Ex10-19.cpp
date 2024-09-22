#include <iostream>
using namespace std;

class CParent {
public:
	CParent() {
		cout << "CParent Constructor" << endl;
	}

	CParent(int arg) {
		cout << arg << " CParent(int arg) Constructor" << endl;
	}

	~CParent() {
		cout << "CParent Destructor" << endl;
	}
};

class CTest : public CParent {
public:
	CTest() {
		CParent(3);		// ?
	}
};

void main() {
	CTest t;
}