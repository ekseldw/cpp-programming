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

class CChild : protected CTest {
public:
	void Func() {
		m_Public++;				// OK
		m_Protected++;			// OK
		m_Private++;			// Error
	}
};

void main() {
	CChild c;
	c.m_Public++;				// Error
	c.m_Protected++;			// Error
	c.m_Private++;				// Error
}