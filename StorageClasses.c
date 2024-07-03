//Code a program to Understand storage class.
#include"stdio.h"

void fun1(){
    auto int b= 20;
    printf("The value of b is : %d\n", b);
}

void fun2(){
    extern int c;
    printf("The value of c is : %d\n", c);
}
int c= 30;

void fun3(){
    static int d;
    d++;
    printf("The value of d is : %d\n", d);
}


int main(){
    printf("storage class.\n\n");

    // int a= 10;
    // printf("The value of a is : %d\n", a);

    // fun1();
    // fun2();
    // printf("The value of c is : %d\n", c);
    // fun3();
    // fun3();
    // fun3();
    // fun3();

    register int a= 5;
    printf("The value of a is : %d", a);

    return(0);
}