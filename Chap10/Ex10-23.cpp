class CTest {
public:
	int m_Value;
	const int m_Const;
	int& m_Ref;
};

void main() {
	CTest t;		// Error
}