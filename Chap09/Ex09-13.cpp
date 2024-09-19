class CTest {
public:
	void Assign(int arg) {
		m_Value = arg;		// 멤버 변경
	}

	void Func() {}			// 변경 없음

	int m_Value;
};

void main() {
	const CTest t;

	t.m_Value = 1;
	t.Assign(1);
	t.Func();
}