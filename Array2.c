//Code a program to sum of any 5 numbers.
#include"stdio.h"
int main(){
    printf("Sum of any 5 number using Array.\n\n");
    // int arr[5]= {2, 4, 2, 1, 0};
    // int sum= 0;
    // for(int i= 0; i<= 4; i++){
    //     sum= sum+ arr[i];
    // }
    // printf("The value of sum is : %d", sum);

    int arr[5];
    for(int i= 0; i<= 4; i++){
        printf("Enter %dth element : ", i);
        scanf("%d", &arr[i]);
    }
    int sum= 0;
    for(int i= 0; i<= 4; i++){
        sum= sum+ arr[i];
    }
    printf("The value of sum is : %d", sum);
    
    return(0);
}