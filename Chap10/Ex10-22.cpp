class CParent {
public:
	int m_Parent;
};

class CTest : public CParent {
public:
	CTest()
		: m_Parent(1)		// Error
		, m_Value(2) {		// OK
	}

	int m_Value;
};

void main() {
	CTest t;
}