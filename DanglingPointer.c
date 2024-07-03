//Code a program to use Dangling pointer in C.
#include"stdio.h"
#include"stdlib.h"

int *fun(){
    int a, b, sum;
    b= 12, b= 23;
    sum= a+ b;
    return &sum;
}

int main(){
    printf("Dangling pointer in C.\n\n");

    // First case of Dangling pointer.
    // int *ptr;
    // ptr= (int *) malloc(5* sizeof(int));

    // ptr[0]= 10;
    // ptr[1]= 20;
    // ptr[2]= 30;
    // ptr[3]= 40;
    // ptr[4]= 50;

    // printf("The address of allocated meemory : %d\n", ptr);

    // free(ptr); // Ptr is now a dangling pointer.

    // Second case of Dangling pointer.

    // int *dangPtr= fun(); // dangPtr is now a dangling pointer.

    // Third case of Dangling pointer.

    int *dangptrV;
    {
        int a= 12;
        dangptrV= &a;
    }

    dangptrV= NULL;

    // dangptrV is now a dangling pointer.
    
    return(0);
}