typedef struct STag {
    char m;
} SType;

void main() {
    SType a, b;

    a.m = 1;

    b = a;  // OK
    b == a; // Error
    b > a;  // Error
}