#include"stdio.h"
int main(){

    // int i;
    // for(i= 1; i<= 10; i++){
    //     int n;
    //     printf("Enter a number here : ");
    //     scanf("%d", &n);
    //     if(n == 4){
    //         printf("Game over.");
    //         break;
    //     }
    //     printf("The enterd number is : %d\n", n);
    // }

    int i;
    for(i= 1; i<= 10; i++){
        if(i == 5){
            continue;
        }
        printf("%d ", i);
    }

    return 0;
}