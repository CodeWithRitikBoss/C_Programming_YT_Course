//Code a program to --.
#include"stdio.h"

int recursiveFun1(int n){// 1+3+5+7+9=25
    if(n == 0){
        return 0;
    }
    return((n*2-1)+ recursiveFun1(n-1));
}

int recursiveFun2(int n){
    if(n == 0){
        return 0;
    }
    return((n*n)+ recursiveFun2(n-1)); //1+4+9+16
}

int recursiveFun3(int n){
    if(n == 0){
        return 0;
    }
    int temp= (n*2);
    return((temp*temp)+ recursiveFun3(n-1));//2,4=4+16
}

int recursiveFun4(int n){
    if(n == 0){
        return 0;
    }
    int temp= (n*2-1);
    return((temp*temp)+ recursiveFun4(n-1));//1,3=1+9=10
}

int recursiveFun6(int n){
    if(n == 1){
        return 1;
    }else if(n == 0){
        return 0;
    }else{
        int remender, quotient;
        remender= n%10;
        quotient= n/10;
        return remender+ recursiveFun6(quotient);
    }
}

int main(){
    printf("Recursion Challanges part-3\n\n");

    //1. print the sum of first n odd natural number using recursive function.
    // int n;
    // printf("Enter a number here : ");
    // scanf("%d", &n);
    // int sum= recursiveFun1(n);
    // printf("The sum is : %d", sum);

    //2. print the sum of square first n natural number using recursive function.
    // int n;
    // printf("Enter a number here : ");
    // scanf("%d", &n);
    // int sum= recursiveFun2(n);
    // printf("The sum is : %d", sum);

    //3. print the sum of square first n even natural number using recursive function.
    // int n; 
    // printf("Enter a number here : ");
    // scanf("%d", &n);
    // int sum= recursiveFun3(n);
    // printf("The sum is : %d", sum);

    //4. print the sum of square first n odd natural number using recursive function.
    // int n; 
    // printf("Enter a number here : ");
    // scanf("%d", &n);
    // int sum= recursiveFun4(n);
    // printf("The sum is : %d", sum);

    //5. solve this question yourself.

    // 6. caluate the sum of the digits of given number.
    //234=2+3+4=9
    int n; 
    printf("Enter a number here : ");
    scanf("%d", &n);
    int sum= recursiveFun6(n);
    printf("The sum is : %d", sum);


    return(0);
}