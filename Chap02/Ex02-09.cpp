#include <iostream>
using namespace std;

void main() {
	char str[] = "���ѹα�";
	int length = sizeof(str);
	cout << str << length << endl;

	wchar_t wstr[] = L"���ѹα�";
	int wlength = sizeof(wstr);
	wcout << str << wlength << endl;
}