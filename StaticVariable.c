//Code a program to understand static variable.
#include"stdio.h"

void fun1(){
    static int a;
    a++;
    printf("The value of a is : %d\n", a);
}

int main(){
    printf("Static variable.\n\n");

    // static int myVar;
    // printf("The value of myVar is : %d\n", myVar);

    fun1();
    fun1();
    fun1();
    fun1();
    fun1();
    fun1();
    fun1();
    
    return(0);
}