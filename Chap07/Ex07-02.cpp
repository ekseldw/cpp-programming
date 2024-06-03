struct STag {
    char m;
};

void main() {
    struct STag s1;
    struct STag s2;

    s1 = s2; // OK
}