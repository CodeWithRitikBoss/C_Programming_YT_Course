#include"stdio.h"
int main(){

    int a= 12;

    printf("The size of variable a : %d\n", sizeof(a));

    char n= 'c';
    printf("The size of variable c : %d\n", sizeof(n));


    printf("The address of variable a : %d\n", &a);
    printf("The address of variable n : %d\n", &n);

    return 0;
}