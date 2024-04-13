//Code a program to Print patter part-2.
/*

1st Pattern.
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

2nd Pattern.
* * * * * * * * * *
  * * * * * * * *
    * * * * * *
      * * * *
        * *
         *

3rd Pattern.
        *
      * *
    * * *
  * * * *
* * * * *
  * * * *
    * * *
      * *
        *

4th Pattern.
* * * * *
  * * * *
    * * *
      * *
        *
      * *
    * * *
  * * * *
* * * * *

*/
#include"stdio.h"
int main(){
    printf("Pattern printing part-2\n\n");

    //1st patten.
    // for(int i= 1; i<= 5; i++){
    //     for(int j= 1; j<= i; j++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }
    // for(int i= 1; i<= 4; i++){
    //     for(int j= 4; j>= i; j--){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    //2nd patten.
    // for(int i= 1; i<= 5; i++){
    //     for(int j= 1; j<= 10-i; j++){
    //         if(j >= i){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }

    //3rd patten.
    // for(int i= 0; i< 5; i++){
    //     for(int j= 1; j<= 5; j++){
    //         if(j>=5-i){
    //             printf("* ");
    //         }else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
    // for(int i= 1; i<= 5; i++){
    //     for(int j= 1; j<= 5; j++){
    //         if(i>= j){
    //             printf("  ");
    //         }else{
    //             printf("* ");
    //         }
    //     }
    //     printf("\n");
    // }

    //4th patten.
    for(int i= 1; i<= 5; i++){
        for(int j= 1; j<= 5; j++){
            if(i-1 >= j){
                printf("  ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
    for(int i= 1; i< 5; i++){
        for(int j= 1; j<= 5; j++){
            if(j>= 5-i){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
    return(0);
}