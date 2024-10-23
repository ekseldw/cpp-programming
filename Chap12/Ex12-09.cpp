class CTop {
public:
	int m_Top;
};

class CLeft : public CTop {
public:
	int m_Left;
};

class CRight : public CTop {
public:
	int m_Right;
};

class CBottom : public CLeft, public CRight {
public:
	CBotton() {
		m_Top = 1;			// Error
		m_Left = 2;
		m_Right = 3;
		m_Bottom = 4;
	}

	int m_Bottom;
};

void main() {
	CBottom b;
}