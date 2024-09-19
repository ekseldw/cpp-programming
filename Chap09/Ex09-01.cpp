#include <iostream>
using namespace std;

class CFamily {						// ClassName
protected:							// 접근 지정자
	char* m_FamilyName;				// 멤버 데이터 정의
public:								// 접근 지정자
	void SetFamilyName(char* arg) { // 멤버 함수 정의
		m_FamilyName = arg;
	}
};

class CName : public CFamily {		// BASE_LIST
private:							// 접근 지정자
	char* m_Name;
public:								// 접근 지정자
	void SetName(char* arg);		// 멤버 함수의 선언
	void ShowName() {				// 멤버 함수의 정의
		cout << m_FamilyName << " " << m_Name << endl;
	}
};

void CName::SetName(char* arg) {	// 외부 멤버 함수 정의
	m_Name = arg;
}

void main() {
	CName name;
	name.SetFamilyName("Shin");
	name.SetName("Young-Rok");
	name.ShowName();
}