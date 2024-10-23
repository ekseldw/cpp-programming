class CParent {
public:
	CParent& operator = (int arg) {
		m_Value = arg;
		return *this;
	}

	CParent& operator ++ () {
		m_Value++;
		return *this;
	}

	CParent operator + (int arg) {
		CParent p = *this;
		p.m_Value += arg;
		return p;
	}

	int m_Value = 0;
};

class CTest : public CParent {

};

void main() {
	CParent p;
	p = 1;				// OK
	++p;				// OK
	p + 1;				// OK

	CTest t;
	t = 1;				// Error
	++t;				// OK
	t + 1;				// OK
}