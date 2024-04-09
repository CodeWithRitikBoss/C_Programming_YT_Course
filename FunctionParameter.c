//Code a program to --.
#include"stdio.h"

int sum(int a, int b){ // formal parameters.
    return a+b;
}

int main(){
    printf("Function parameters type.\n\n");
    
    int x, y;
    x= 12;
    y= 20;
    printf("The sum is : %d", sum(x, y)); // actual parameters.

    return(0);
}