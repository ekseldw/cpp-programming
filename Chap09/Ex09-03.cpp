class CTest {
	char* m_Name;

public:
	int m_Level;
};

struct STest {
	char* m_Name;

private:
	int m_Level;
};

void main() {
	CTest c;
	c.m_Name = "Class";		// Error
	c.m_Level = 2;			// OK

	STest s;
	s.m_Name = "Struct";	// OK
	s.m_Level = 1;			// Error
}