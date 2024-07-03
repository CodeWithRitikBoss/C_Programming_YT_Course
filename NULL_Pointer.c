//Code a program to NULL Pointer in C.
#include"stdio.h"
int main(){
    printf("NULL Pointer in C.\n\n");

    int a= 34;
    int *ptr= &a;

    if(ptr != NULL){
        printf("The value of a is : %d\n", *ptr);
    }else{
        printf("The pointer is a null pointer.");
    }
    
    return(0);
}