#include"stdio.h"
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return (n* factorial(n-1));
    }
}
int main(){

    int a;
    printf("Enter a number here : ");
    scanf("%d", &a);
    int fact= factorial(a);
    printf("The factorial of %d is : %d", a, fact); // 5*4*3*2*1 = 120

    return 0;
}

// todays home work
// 1. Write a program to print natural number till the n numbers using Recursion.
// 2. Write a program to print first 10 even natural number using recursion.