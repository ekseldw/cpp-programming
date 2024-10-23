class CTest {
public:
	void Func() {
		m_Public++;				// OK
		m_Protected++;			// OK
		m_Private++;			// OK
	}

	int m_Public = 1;			// Public

protected:
	int m_Protected = 2;		// Protected

private:
	int m_Private = 3;			// Private
};

class CChild : public CTest {
public:
	void Func() {
		m_Public++;				// OK
		m_Protected++;			// OK
		m_Private++;			// Error
	}
};

void main() {
	CTest t;
	t.m_Public++;				// OK
	t.m_Protected++;			// Error
	t.m_Private++;				// Error
}