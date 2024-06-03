void Func(int arg) {

}

void Func(const int arg) { // Error

}

void main() {
    int a = 1;
    Func(a);
}