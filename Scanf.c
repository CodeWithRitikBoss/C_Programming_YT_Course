#include"stdio.h"
int main(){

    // int n; // variable declaration,
    // printf("Enter a number here : ");
    // scanf("%d", &n);

    // printf("The value of n is : %d", n);

    int a, b;
    // write a program to add two number given by user.
    printf("Enter first number here: ");
    scanf("%d", &a);

    printf("Enter second number here: ");
    scanf("%d", &b);

    int sum = a+ b; // 5+ 12 = 17;
    printf("Sum of two numbers : %d", sum);

    return 0;
}