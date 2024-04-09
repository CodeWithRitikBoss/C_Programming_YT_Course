#include"stdio.h"
int main(){
    int a, b;
    a= 5;
    b= 6;

    // Logical operators.
    printf("%d\n", ((a> b) && (b < a))); // 0
    printf("%d\n", ((a < b) || (a == b))); // 1
    printf("%d\n", !(a == b)); // 1

    return 0;
}