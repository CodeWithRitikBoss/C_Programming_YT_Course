//Code a program to use void pointer in C.
#include"stdio.h"
int main(){
    printf("void pointer in C.\n\n");

    int a= 10;
    float b= 12.5;

    void *ptr= &a;

    printf("The value of a is : %d\n", a);
    printf("The value of b is : %0.1f\n", b);

    printf("The value of a is using void pointer : %d\n", *(int*) ptr);

    ptr= &b;

    printf("The value of b is using void pointer : %0.1f\n", *(float*) ptr);

    printf("The address of a is : %d\n", &b);
    printf("The address of a is using pointer : %d\n", ptr);

    
    return(0);
}
