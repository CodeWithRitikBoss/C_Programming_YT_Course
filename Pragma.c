//Code a program to #pragma in C.
#include"stdio.h"
    
void fun1();
void fun2();

#pragma startup fun1 // This function will invoke before the main function.
#pragma exit fun2 // This function will invoke befor exit the program.

void fun1(){
    printf("Hello, My dear Function one.");
}
void fun2(){
    printf("Hello, My dear Function two.");
}


int main(){
    printf("#pragma in C.\n\n");
    
    return(0);
}