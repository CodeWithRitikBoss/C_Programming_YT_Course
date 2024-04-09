#include"stdio.h"
int fun4i(int, int);// funciton declaration.
int fun4j(int);
int main(){

    printf("Function part-4\n\n");
    //Write a program to print multiply of two number using function Ts-Rs.
    // int a=4, b=6;
    // int n= fun4i(a, b);
    // printf("The multiply of a and b : %d\n", n);

    //Write a print to add number till the n number. 1+2+3+4+5=15
    int n;
    printf("Enter a number here : ");
    scanf("%d", &n);
    printf("The sum of till the n numbers : %d\n", fun4j(n));
    
    return 0;
}
// function definiton.
int fun4i(int x, int y){
    // int multiply= (x*y);
    // return multiply;
    return (x*y); //2*4= 8
}

int fun4j(int m){
    int sum= 0;
    for(int i=1; i<= m; i++){
        sum= sum+i;
    }
    return sum;
}