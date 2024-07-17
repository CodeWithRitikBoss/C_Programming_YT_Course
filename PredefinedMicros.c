//Code a program to use Predefined micros in C.
#include"stdio.h"
int main(){
    printf("Use Predefined micros in C.\n\n");

    printf("Today's Date is : %s\n", __DATE__);
    printf("Current Time is : %s\n", __TIME__);
    printf("Current working file name is : %s\n", __FILE__);
    printf("Current working line no is : %d\n", __LINE__);
    printf("Is our code is compline by ANSI Standard : %d", __STDC__);
    // if(__STDC__){
    //     printf("Yes, our C program is compiled by ANSI standard.");
    // }
    // else{
    //     printf("No, our C program is not compiled by ANSI standar.");
    // }
    
    return(0);
}