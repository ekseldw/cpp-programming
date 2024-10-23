class CTest {
public:
	int m_Value = 0;
};

// 멤버, 전역 연산자 함수 가능
CTest operator + (const CTest& arg1, int arg2) {
	CTest t;
	t.m_Value = arg1.m_Value + arg2;
	return t;
}

// 전역 연산자 함수만 가능
CTest operator + (int arg1, const CTest& arg2) {
	CTest t;
	t.m_Value = arg1 + arg2.m_Value;
	return t;
}

// 멤버, 전역 연산자 함수 가능
CTest operator + (const CTest& arg1, const CTest& arg2) {
	CTest t;
	t.m_Value = arg1.m_Value + arg2.m_Value;
	return t;
}

void main() {
	CTest t1;
	t1.m_Value = 1;

	CTest t2;
	t2.m_Value = 2;

	CTest s1 = t1 + 2;		// OK
	CTest s2 = 1 + t2;		// OK
	CTest s3 = t1 + t2;		// OK
}