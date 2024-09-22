class CTest {
public:
	CTest(int arg) {
		m_Value = arg;
	}

	int m_Value;
};

void main() {
	CTest t1;		// Error
	CTest t2(3);	// OK
}