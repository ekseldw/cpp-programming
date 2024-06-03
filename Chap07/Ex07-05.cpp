#include <iostream>
using namespace std;

typedef struct STag {
    int m;
    char* str;
} SType;

void main() {
    SType s;
    s.m = 2017;
    s.str = "C++";

    cout << s.m << " " << s.str << endl;
}