#include <iostream>
using namespace std;

typedef struct STag {
    int m;
} SType;

void Func(SType* pArg) {
    pArg->m = 2;
    cout << pArg->m << endl;
}

void main() {
    SType a;
    a.m = 1;

    Func(&a);

    cout << a.m << endl;
}