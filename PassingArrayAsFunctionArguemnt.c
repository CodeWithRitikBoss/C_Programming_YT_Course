//Code a program to Passing Array As Function Argument.
#include"stdio.h"

//First way to pass array into the function.
void fun1(int arr1[]){
    for(int i= 0; i<= 3; i++){
        printf("%d ", arr1[i]);
    }
    printf("\n");
    arr1[0]= 20;
}

//Second way to pass array into the function.
void fun2(int *ptr){
    for(int i= 0; i<= 3; i++){
        // printf("%d ", ptr[i]);
        printf("%d ", *(ptr+i));
        *(ptr+1)= 23;
    }
    printf("\n");
}

int main(){
    printf("Passing Array As Function Argument\n\n");

    int arr[4]= {2, 4 ,12, 14};
    fun1(arr);
    printf("The value at 0th index is : %d\n", arr[0]);

    fun2(arr);
    printf("The value at 1th index is : %d\n", arr[1]);
    
    return(0);
}