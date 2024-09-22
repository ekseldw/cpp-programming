class CTest {
public:
	int m_Value;
	const int m_Const = 1;
	int& m_Ref = m_Value;
};

void main() {
	CTest t;		// OK
}