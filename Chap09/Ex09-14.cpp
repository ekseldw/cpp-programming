class CTest {
public:
	void Func1() const {		// ���� ����

	}

	void Func2() const;			// �ܺ� ����

	int m_Value;
};

void CTest::Func2() const {

}

void main() {
	const CTest ct;
	ct.Func1();					// OK
	ct.Func2();					// OK
}