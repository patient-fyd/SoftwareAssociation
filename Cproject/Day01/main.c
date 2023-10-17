#include <stdio.h>

int main() {

    int a = 1;
    int x = 0;

    a = (++x) + (x++);
    printf("a = %d\n", a);
    printf("x = %d\n", x);
    return 0;
}
