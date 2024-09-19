class CTest {
public:
	void Func1() const {		// 내부 정의

	}

	void Func2() const;			// 외부 정의

	int m_Value;
};

void CTest::Func2() const {

}

void main() {
	const CTest ct;
	ct.Func1();					// OK
	ct.Func2();					// OK
}