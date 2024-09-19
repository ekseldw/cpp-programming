struct STest
{
	char* m_Name;
};

void main() {
	struct STest s1;	// C style
	s1.m_Name = "C";

	STest s2;
	s2.m_Name = "C++";
}