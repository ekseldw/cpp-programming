#include <iostream>
using namespace std;

class CParent {
public:
	CParent() {
		cout << "CParent Constructor" << endl;
	}

	~CParent() {
		cout << "CParent Destructor" << endl;
	}
};

class CTest : public CParent {
public:
	CTest() {
		cout << "CTest Constructor" << endl;
	}

	~CTest() {
		cout << "CTest Destructor" << endl;
	}
};

void main() {
	CTest t;
}