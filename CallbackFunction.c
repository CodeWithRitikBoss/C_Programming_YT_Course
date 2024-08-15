//Code a program to use Callback function in C.
#include"stdio.h"

int sum(int a, int b){
    return (a+ b);
}

void sayGM(int (*functionPointer)(int, int)){
    printf("Good Morning!\n");
    printf("The sum of 2, 7 is : %d\n", functionPointer(2, 7));
}

int main(){
    printf("Callback function in C.\n\n");

    int (*functionPointer)(int , int);
    functionPointer= &sum;
    sayGM(functionPointer);
    
    return(0);
}