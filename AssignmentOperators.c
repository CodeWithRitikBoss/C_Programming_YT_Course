#include"stdio.h"
int main(){

    // Assignment Operators.
    int a, b;
    a= 4; 
    b= 3;
    printf("The value of a is : %d\n", a);
    printf("The value of b is : %d\n", b);

    a+= b; // a= a+ b -> a= 4+ 3 = 7
    printf("Now the value of a is : %d\n", a);

    a-= b; // 7-3 = 4
    printf("Now the value of a is : %d\n", a);

    a*= b; // 4*3 = 12
    printf("Now the value of a is : %d\n", a);

    a/= b; // 12/ 3 = 4
    printf("Now the value of a is : %d\n", a);

    a%= b; // 4 % 3= 1
    printf("Now the value of a is : %d\n", a);


    return 0;
}