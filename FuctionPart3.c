//Write a program to Add three number using function with Tn - Rs nature.
#include"stdio.h"
int fun3(); // function declaration.
int main(){

    printf("Function part - 3\n\n");
    int sum= fun3();
    printf("The sum of three numbers : %d", sum);

    return 0;
}

// function definition.
int fun3(){
    int a, b, c;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);

    return (a+ b+ c);
}


/*
Write a program to print muliplication of 4 number using function Tn - Rs nature.
*/