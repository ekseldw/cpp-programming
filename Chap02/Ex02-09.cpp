#include <iostream>
using namespace std;

void main() {
	char str[] = "¥Î«—πŒ±π";
	int length = sizeof(str);
	cout << str << length << endl;

	wchar_t wstr[] = L"¥Î«—πŒ±π";
	int wlength = sizeof(wstr);
	wcout << str << wlength << endl;
}