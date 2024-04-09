//Code a program to --.
#include"stdio.h"

// void recursiveFun1(int n){//5
//     if(n == 0){
//         return;
//     }else{
//         recursiveFun1(n-1);
//         printf("%d\n", n);
//     }
// }

// void recursiveFun2(int n){//5
//     if(n == 0){
//         return;
//     }else{
//         printf("%d\n", n);
//         recursiveFun2(n-1);
//     }
// }

// void recursiveFun3(int n){//5
//     if(n == 0){
//         return;
//     }else{
//         recursiveFun3(n-1);
//         printf("%d\n", n*2);
//     }
// }

// void recursiveFun4(int n){//5
//     if(n == 0){
//         return;
//     }else{
//         printf("%d\n", n*2);
//         recursiveFun4(n-1);
//     }
// }

void recursiveFun5(int n){//5
    if(n == 0){
        return;
    }else{
        recursiveFun5(n-1);
        printf("%d\n", n*2-1);
    }
}

void recursiveFun6(int n){//5
    if(n == 0){
        return;
    }else{
        printf("%d\n", n*2-1);
        recursiveFun6(n-1);
    }
}

int main(){
    printf("Recursion challanges part-1.\n\n");

    //1. Print first n natural number using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun1(n);

    //2 Print first n natural number in reverse order using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun2(n);

    //3 Print first n even natural number using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun3(n);

    //4 Print first n even natural number in reverse order using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun4(n);
    
    //5 Print first n odd natural number using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun5(n);

    //6 Print first n odd natural number in reverse order using recursive function.
    int n;
    printf("Enter a number here: ");
    scanf("%d", &n);
    recursiveFun6(n);

    return(0);
}