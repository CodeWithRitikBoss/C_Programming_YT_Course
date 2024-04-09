#include"stdio.h"
int main(){

    for(int i= 1; i<= 5; i++){
        if(i<=4){
            printf("%d", i);
        }else{
            goto abc;
        }
    }
    abc:
    printf("\nHere I am out of the loop. by using goto statement.");

    return 0;
}