//Code a program to use #undef in C.
#include"stdio.h"

#define A 25

int main(){
    printf("#undef in C.\n\n");

    printf("The value of a is : %d\n", A);

    #undef A

    //printf("The value of a is : %d\n", A); // this line of code will throw an error.
    
    return(0);
}