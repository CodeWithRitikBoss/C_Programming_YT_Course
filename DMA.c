//Code a program to Allocation of DMA in C.
#include"stdio.h"
#include"stdlib.h"
int main(){
    printf("Allocation of DMA in C.\n\n");

    // // DMA using malloc() function.
    // int *ptr, n;

    // printf("Enter the size of your memory : ");
    // scanf("%d", &n);
    
    // ptr= (int *) malloc(n* sizeof(int));
    // for(int i= 0; i< n; i++){
    //     printf("Enter the value of %dth index : ", i);
    //     scanf("%d", &ptr[i]);
    // }

    // for(int i= 0; i<= n; i++){
    //     printf("The value at %dth index is : %d\n", i, ptr[i]);
    // }


    // DMA using calloc() function.
    int *ptr, n;

    printf("Enter the size of your memory : ");
    scanf("%d", &n);
    
    ptr= (int *) calloc(n, sizeof(int));
    for(int i= 0; i< n; i++){
        printf("Enter the value of %dth index : ", i);
        scanf("%d", &ptr[i]);
    }

    for(int i= 0; i< n; i++){
        printf("The value at %dth index is : %d\n", i, ptr[i]);
    }

    free(ptr);
    

    // DMA using realloc() function.
    int *ptr1, m;

    printf("\nEnter the size of your new memory : ");
    scanf("%d", &n);
    
    ptr1= (int *) realloc(ptr, m*sizeof(int));
    for(int i= 0; i< n; i++){
        printf("Enter the value of %dth index : ", i);
        scanf("%d", &ptr1[i]);
    }

    for(int i= 0; i< n; i++){
        printf("The value at %dth index is : %d\n", i, ptr1[i]);
    }

    free(ptr1);

    return(0);
}