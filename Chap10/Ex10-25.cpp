class CTest {
public:
	CTest() : m_Const(1), m_Ref(m_Value) {}

	int m_Value;
	const int m_Const;
	int& m_Ref;
};

void main() {
	CTest t;		// OK
}