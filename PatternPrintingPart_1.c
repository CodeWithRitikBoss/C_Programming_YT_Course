//Code a program to Print patter.
/*

1st Pattern.
*
* *
* * *
* * * *
* * * * *

2nd Pattern.
* * * * *
  * * * *
    * * *
      * *
        *

3rd Pattern.
* * * * *
* * * *
* * *
* *
*

4th Pattern.
        *
      * *
    * * *
  * * * *
* * * * *

*/


#include"stdio.h"
int main(){
    printf("Print patter\n\n");

    //1st patten.
    // for(int i=0; i< 5; i++){
    //     for(int j=0; j<= i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //2nd patten.
    // for(int i= 1; i<= 5; i++){
    //     for(int j= 1; j<= 5; j++){
    //         if(i-1 >= j){
    //             printf("  ");
    //         }else{
    //             printf("* ");
    //         }
    //     }
    //     printf("\n");
    // }

    //3rd patten.
    // for(int i= 1; i<= 5; i++){
    //     for(int j= 1; j<= 6-i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //4th patten.
    for(int i= 0; i< 5; i++){
        for(int j= 1; j<= 5; j++){
            if((j>= 6-i)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return(0);
}