class CParent {
public:
	CParent(int arg) {

	}
};

class CTest : public CParent {

};

void main() {
	CParent p(0);		// OK
	CTest t(0);			// Error
}