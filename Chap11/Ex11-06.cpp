class CTest {
public:
	CTest operator + (int arg) {
		CTest t;
		t.m_Value = m_Value + arg;
		return t;
	}

	int m_Value = 0;
};

void main() {
	CTest t;
	t.m_Value = 1;

	CTest s1 = t + 2;	// OK
	CTest s2 = 2 + t;	// Error
}