class CTest {
public:
	int m_I = 1;
	const int m_CI = 2;
	static int s_I;				// �ܺ� ���� �ʿ�
	static const int s_CI = 4;	// ���� const ������

	double m_D = 1.1;
	const double m_CD = 2.2;
	static double s_D;			// �ܺ� ���� �ʿ�
	static const double s_CD;	// �ܺ� ���� �ʿ�
};

int CTest::s_I = 3;
double CTest::s_D = 3.3;
const double CTest::s_CD = 4.4;