//Code a program to Taking string input from the user in C.
#include"stdio.h"
int main(){
    printf("Taking string input from the user in C.\n\n");

    char name[20];
    printf("Enter your name here : ");
    gets(name);
    printf("You have entered your name this : %s\n", name);
    puts(name);
    
    return(0);
}