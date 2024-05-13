//Code a program to Print patter part-4.
/*

1st Pattern.
A
B C
D E F
G H I J
K L M N O

2nd Pattern.
O
N M
L K J
I H G F
E D C B A

*/

#include"stdio.h"
int main(){
    printf("Pattern printing part-4\n\n");

    //1st Pattern.
    int a= 65; //65- A, 66-B, 67-C, 68-D, 69-E....

    // printf("The value is present inside the a variable : %c", a);
    // for(int i= 1; i<= 5; i++){
    //     for(int j= 1; j<= i; j++){
    //         printf("%c ", a++);
    //     }
    //     printf("\n");
    // }

    //2nd Pattern.
    int b= 'O'; //79, 78

    // printf("The value is present inside the b variable : %c\n", b);
    // printf("The value is present inside the b variable : %d\n", b);

    for(int i= 1; i<= 5; i++){
        for(int j= 1; j<= i; j++){
            printf("%c ", b--);
        }
        printf("\n");
    }
    
    return(0);
}