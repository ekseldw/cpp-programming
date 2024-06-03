typedef struct STag {
    int a;
    int b;
    int c;
} SType;

void main() {
    SType s1, s2;

    s1.a = 1;
    s1.b = 2;
    s1.c = 3;

    s2 = s1;
}