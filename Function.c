#include"stdio.h"
void add(); // function declaration.
int main(){

    add();
    add();

    return 0;
}
// function definition.
void add(void){
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    int sum= (a+ b);
    printf("The sum of a and b is : %d", sum);
}