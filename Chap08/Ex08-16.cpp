#include <iostream>
using namespace std;

void main() {
    printf("%d\r\n", 1);
    printf("%d, %.2f\r\n", 1, 2.0);
    printf("%d, %.2f, %c\r\n", 1, 2.0, '3');
    printf("%d, %.2f, %c, %s\r\n", 1, 2.0, '3', "Four");
}