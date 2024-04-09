//Code a program to use String functions in C.
#include"stdio.h"
#include"string.h"
int main(){
    printf("String functions in C.\n\n");

    // char string1[]= "Good ";
    // char string2[]= "Morning";
    // printf("The string1 is : %s\n", string1);
    // printf("The string2 is : %s\n", string2);

    // //String Functions.
    // // printf("The combine of string1 and string2 : %s\n", strcat(string1, string2));
    // printf("The length of string1 : %d\n", strlen(string1));
    // char string3[]= "C Programming";
    // printf("The length of string3 : %d\n", strlen(string3));
    // puts(string3);
    // printf("The revers string3 : %s\n", strrev(string3));

    // printf("Now is value of string3 is : %s\n", strcpy(string3, string1));
    // puts(string3);

    char s1[]= "Taurn";
    char s2[]= "Taurn";

    printf("This is the compare s1 to s2 : %d\n", strcmp(s1, s2));
    
    
    return(0);
}