#include <stdio.h>
#define PI 3.1415926
int main(){

    int a = 10;
    int b = 20;
    b = a++;

    printf("a = %d, b = %d\n", a, b);

    int i = 10;
    int j = 20;
    j = ++i;

    printf("i = %d, j = %d\n", i, j);
    return 0;
}