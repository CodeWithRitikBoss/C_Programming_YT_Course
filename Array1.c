#include"stdio.h"
int main(){

    printf("Array in C.\n\n");
    int arr[5];
    // arr[0]= 10;
    // arr[1]= 20;
    // arr[2]= 30;
    // arr[3]= 40;
    // arr[4]= 50;

    // printf("The value at index 0 : %d\n", arr[0]);
    // printf("The value at index 3 : %d\n", arr[3]);

    for(int i= 0; i<= 4; i++){
        printf("Enter %dth element here: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i= 0; i<= 4; i++){
        printf("The value at index %d is : %d\n", i, arr[i]);
    }

    return 0;
}