#include"stdio.h"
int main(){

    int a, b;
    a= 2;
    b= 3;

    printf("%d\n", (a & b)); // 2
    printf("%d\n", (a | b)); // 3
    printf("%d\n", (a ^ b)); // 1

    return 0;
}