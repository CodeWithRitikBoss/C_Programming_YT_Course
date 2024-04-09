//Code a program structure in C.
#include"stdio.h"

struct student{
    int rollNo;
    int class;
    char favChar;
};

int main(){
    printf("Structure in C.\n\n");

    struct student Rohan;
    Rohan.rollNo= 102;
    Rohan.class= 10;
    Rohan.favChar= 'R';

    printf("The Roll no of Rohan is : %d\n", Rohan.rollNo);
    printf("The class of Rohan is : %d\n", Rohan.class);
    printf("The favChar of Rohan is : %c\n", Rohan.favChar);
    printf("\n");

    struct student Mohan;
    Mohan.rollNo= 103;
    Mohan.class= 11;
    Mohan.favChar= 'M';

    printf("The Roll no of Mohan is : %d\n", Mohan.rollNo);
    printf("The class of Mohan is : %d\n", Mohan.class);
    printf("The favChar of Mohan is : %c\n", Mohan.favChar);
    printf("\n");


    struct student s1, s2, s3;

    struct student s4={104, 9, 's'};
    printf("The Roll no of s4 is : %d\n", s4.rollNo);
    printf("The class of s4 is : %d\n", s4.class);
    printf("The favChar of s4 is : %c\n", s4.favChar);
    
    return(0);
}