//Code a program to #ifdef, #ifndef and #endif in C.
#include"stdio.h"

#define B 89
// #define A 80

int main(){
    printf("#ifdef, #ifndef and #endif in C.\n\n");

    #ifdef B
    printf("Hello, I am defined.\n");
    printf("The value of B micro is : %d\n\n", B);
    #endif

    #ifndef A
    printf("Hello, I am not defined.\n");
    printf("Bye!");
    #endif
    
    return(0);
}