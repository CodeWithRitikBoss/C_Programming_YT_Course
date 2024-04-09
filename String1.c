//Code a program to string in c.
#include"stdio.h"
int main(){
    printf("String in C Programming.\n\n");

    char str1[8]={'W', 'e', 'l', 'c', 'o', 'm', 'e', '\0'}; //Welcome
    printf("First way of string.\n");
    for(int i=0; i<= str1[i]!= '\0'; i++){
        printf("%c", str1[i]);
    }
    printf("\n");

    char str2[]={'G', 'o', 'o', 'd', '\0'}; //Character array with intitialzation.
    for(int i=0; i<= str2[i]!= '\0'; i++){
        printf("%c", str2[i]);
    }
    printf("\n");

    printf("Second way of string.\n");
    char str3[]= "Good Morning";
    printf("%s\n", str3);
    puts(str3);
    
    return(0);
}