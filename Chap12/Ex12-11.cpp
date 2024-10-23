#include <iostream>
using namespace std;

class CTop {
public:
	CTop() {
		cout << "CTop" << endl;
	}
};

class CLeft : virtual public CTop {
public:
	CLeft() {
		cout << "CLeft" << endl;
	}
};

class CRight : virtual public CTop {
public:
	CRight() {
		cout << "CRight" << endl;
	}
};

class CBottom : public CLeft, public CRight {
public:
	CBottom() {
		cout << "CBottom" << endl;
	}
};

void main() {
	CBottom b;
}