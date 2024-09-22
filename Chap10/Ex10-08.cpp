class CTest {
public:
	CTest() {
	}

	CTest(CTest& obj) {		// Non-const
	}
};

void main() {
	CTest t;
	const CTest ct;

	CTest t1(t);			// OK
	CTest t2(ct);			// Error
}