#include<stdio.h>

int divint(int, int);

int main() {
    int x = 5, y = 2;
    printf("5 / 2 = %d\n", divint(x, y));

    x = 3, y = 0;
    printf("3 / 0 = %d\n", divint(x, y));

    return 0;
}

int divint(int lhs, int rhs) {
    return lhs / rhs;
}
