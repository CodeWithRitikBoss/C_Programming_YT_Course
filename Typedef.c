//Code a program to use typedef keyword in C.
#include"stdio.h"

int main(){
    printf("Typedef keyword in C.\n\n");

    int a= 30;
    unsigned long int b= 12;

    printf("The value of a is : %d\n", a);
    printf("The value of b is : %d\n", b);

    typedef unsigned long int uli;

    uli c= 34;
    printf("The value of c is : %d\n", c);

    
    return(0);
}