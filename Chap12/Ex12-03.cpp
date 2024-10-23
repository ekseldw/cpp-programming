class CTest {
protected:
	int m_Value;
};

class CChild : public CTest {
public:
	void Set(int arg) {
		m_Value = arg;
	}
};

void main() {
	CTest t;
	t.m_Value = 1;				// Error

	CChild& c = (CChild&)t;
	c.Set(1);					// OK
}