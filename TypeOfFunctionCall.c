//Code a program to --.
#include"stdio.h"

void fun(int a){
    a= 15;
}
void fun1(int *ptr){
    *ptr= 20;
}
void fun2(int *ptrr){
    *ptrr= 30;
}

int main(){
    printf("Type of function call in C\n\n");

    int a= 5;
    fun(a);//function call by value.
    printf("The value of a is : %d\n", a);
    fun1(&a);//function call by reference.
    printf("Now the value of a is : %d\n", a);
    fun2(&a);
    printf("Now the value of a is : %d\n", a);


    return(0);
}