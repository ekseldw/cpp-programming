class CTest {
public:
	void Func() {}

	void CFunc1() const {
		m_Value = 1;		// Error
	}

	void CFunc2() const {
		Func();				// Error
	}

	CTest& CFunc3() const {
		return *this;		// Error
	}

	CTest* CFunc4() const {
		return this;		// Error
	}

	const CTest& CFunc5() const {
		return *this;		// OK
	}

	const CTest* CFunc6() const {
		return this;		// OK
	}

	int m_Value;
};