#include"stdio.h"
int main(){

    printf("Typecasting in Today's video.\n\n");

    int a= 4;
    float b= 54/5;
    printf("The value of a is = %d\n", a);
    printf("The value of b is = %0.3f\n", b);

    b= (float)54/5;
    printf("Now the value of b is = %0.1f\n", b);

    return 0;
}