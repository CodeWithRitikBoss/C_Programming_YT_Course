//Code a program to #if, #elif, #else and #endif in C.
#include"stdio.h"

#define a 20

int main(){
    printf("#if, #elif, #else and #endif in C.\n\n");

    #if a == 16
    printf("Hello, I am 16");
    #elif a == 17
    printf("Hii, I am 17");
    #else
    printf("Bye, I am not 16, 17");
    #endif
    
    return(0);
}