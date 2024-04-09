//Code a program to --.
#include"stdio.h"

int recursiveFun1(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return (recursiveFun1(n-1)+ recursiveFun1(n-2));
}

int main(){
    printf("Fibonacci Series.\n\n");

    //1. print nth term of Fibonacci Series.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // int value= recursiveFun1(n);    
    // printf("The value is : %d", value);

    //2. Print Fibonacci series till the Nth Term using Recursive function.0 1 1 2 3 5
    int n;
    printf("Enter a number here: ");
    scanf("%d", &n);
    for(int i= 0; i< n; i++){
        int value= recursiveFun1(i);    
        printf("%d ", value);
    }

    return(0);
}