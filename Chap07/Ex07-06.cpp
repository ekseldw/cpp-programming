#include <iostream>
using namespace std;

typedef struct STag {
    int m;
    char* str;
} SType;

void main() {
    SType s;

    SType* pS = &s;
    pS->m = 2017;
    pS->str = "C++";

    cout << pS->m << " " << pS->str << endl;
}