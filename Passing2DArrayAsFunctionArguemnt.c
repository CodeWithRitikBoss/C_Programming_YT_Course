//Code a program to Passing 2D-Array As Function Argument.
#include"stdio.h"

void fun1(int arr1[3][3]){
    for(int i= 0; i< 3; i++){
        for(int j= 0; j< 3; j++){
            printf("The value at %d, %d is %d\n", i, j, arr1[i][j]);
        }
    }
    printf("\n");
    arr1[1][1]= 20;
}

int main(){
    printf("Passing 2D-Array As Function Argument\n\n");

    int arr[3][3]= {{2, 4, 5},
                    {5, 7, 9},
                    {4, 3, 6}};
    fun1(arr); 
    printf("The value at 1, 1 is %d\n", arr[1][1]);
           
    
    return(0);
}