class CTest {
	friend CTest operator + (int arg1, const CTest& arg2);

public:
	CTest(int arg) {
		m_Value = arg;
	}

private:
	int m_Value = 0;
};

// ���� ������ �Լ��� ����
CTest operator + (int arg1, const CTest& arg2) {
	CTest t(0);
	t.m_Value = arg1 + arg2.m_Value;		// ?
	return t;
}

void main() {
	CTest t(2);
	CTest s = 1 + t;
}