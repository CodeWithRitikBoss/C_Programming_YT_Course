//Code a program to use #define pre-processor in C.
#include"stdio.h"

#define a 20

#define PI 3.14

#define in int

#define SQUARE(radius) radius*radius
int main(){
    printf("#define pre-processor in C.\n\n");

    printf("The value of a is : %d\n", a);

    in b= 10;
    printf("The value of b is : %d\n", b);

    in r= 5;
    printf("The area of a circle is : %f\n", PI * SQUARE(r));
    
    return(0);
}