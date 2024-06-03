#include <iostream>
using namespace std;

typedef struct STag {
    char c;
    int i;
} SType;

void main() {
    cout << sizeof(SType) << endl;
}