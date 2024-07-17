//Code a program to Use ## Directive in C.
#include"stdio.h"
#include"conio.h"

#define Action1(a, b) a##a+b*a  //55+30 = 85
int main(){
    printf("Use ## Directive in C.\n\n");

    printf("%d", Action1(5, 6));
    
    
    //getch();
    return(0);
}