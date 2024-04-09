//Code a program to 2D array in C programming.
#include"stdio.h"
int main(){
    printf("2D array in C.\n\n");
    int arr1[3][3]={{2, 4, 3},
                    {2, 1, 0},
                    {3, 2, 3}};

    for(int i= 0; i<= 2; i++){
        for(int j= 0; j<= 2; j++){
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    int arr2[3][3]={{1, 3, 5},
                    {7, 2, 4},
                    {4, 3, 2}};

    for(int i= 0; i<= 2; i++){
        for(int j= 0; j<= 2; j++){
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i= 0; i<= 2; i++){
        for(int j= 0; j<= 2; j++){
            printf("%d ", arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
    
    return(0);
}

// write the same program to for mulitply.