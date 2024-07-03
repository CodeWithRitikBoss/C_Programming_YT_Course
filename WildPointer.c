//Code a program to Use wild pointer in C.
#include"stdio.h"
int main(){
    printf("Use wild pointer in C.\n\n");
    
    int a = 23;
    int *ptr= NULL; // This is a wild pointer.
    // *ptr= 22; // this is not a good this to do.

    ptr = &a;
    printf("The value of a is : %d\n", *ptr);
    printf("The value of a is : %d\n", a);

    
    return(0);
}