//Code a program to understand Function pointer in C.
#include"stdio.h"

int sum(int a, int b){
    return (a+ b);
}

int main(){
    printf("Function pointer in C\n\n");

    printf("The sum of 2 and 6 is : %d\n", sum(2, 6));

    int (* functionPointer)(int, int); // Function pointer declaration.
    functionPointer= &sum;
    // int result= (*functionPointer)(12, 13);
    // printf("The result is : %d\n", result);
    printf("The result is : %d\n", (*functionPointer)(12, 13));
    
    return(0);
}