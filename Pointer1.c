#include"stdio.h"
int main(){
    printf("Pointer 1\n\n");
    int a= 10;
    int *ptr= &a;

    printf("The address of variable a is : %x\n", &a);
    printf("The address of a variable using ptr. : %x\n", ptr);

    printf("The value of a is : %d\n", a);
    printf("The vaue of  a using *ptr : %d\n", *ptr);

    *ptr= 20;
    printf("The value of a is : %d\n", a);
    printf("The vaue of  a using *ptr : %d\n", *ptr);

    printf("The address of a *ptr variable : %x\n", &ptr);
    int **ptrr= &ptr;
    printf("The address of a *ptr variable using **ptrr : %x\n", ptrr);
    
    return(0);
}