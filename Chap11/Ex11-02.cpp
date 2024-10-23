class CNumber {
public:
	int m_Value;
};

void main() {
	CNumber a;
	CNumber b;

	a.m_Value = 1;
	b.m_Value = 2;

	CNumber sum1 = 1 + 2;	// Error
	CNumber sum2 = a + 2;	// Error
	CNumber sum3 = 1 + b;	// Error
	CNumber sum4 = a + b;	// Error
}