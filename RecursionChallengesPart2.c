//Code a program to --.
#include"stdio.h"

void recursiveFun1(int n){// 1*1=1, 2*2= 4, 3*3= 9
    if(n == 0){
        return;
    }
    recursiveFun1(n-1);
    printf("%d\n", n*n);//1, 4, 9
}

void recursiveFun2(int n){
    if(n == 0){
        return;
    }
    printf("%d\n", n*n);
    recursiveFun2(n-1);
}

void recursiveFun3(int n){
    if(n == 0){
        return;
    }
    recursiveFun3(n-1);
    printf("%d\n", n*n*n);
}

void recursiveFun4(int n){
    if(n == 0){
        return;
    }
    printf("%d\n", n*n*n);
    recursiveFun4(n-1);
}

int recursiveFun5(int n){//3
    if(n == 0){
        return 0;
    }
    return (n+ recursiveFun5(n-1));
    // 2+3= 6
    // 1+2=3
    // 0+1= 1
    //
    
}

int recursiveFun6(int n){
    if(n == 0){
        return 0;
    }
    return ((n*2)+ recursiveFun6(n-1));
    //3
    //6+3-1=12
    //4+2-1=6
    //2+1-1=2
    //2,4,6
    
}

int main(){
    printf("Recursion challenges part-2\n\n");

    //1. Print squrare of first n natural number using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun1(n);

    //2. Print squrare of first n natural number in reverse order using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun2(n);

    //3. Print cube of first n natural number using recursive function. 2*2*2= 8
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun3(n);

    //4. Print cube of first n natural number in reverse order using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // recursiveFun4(n);

    //5. Print sum of first n natural number using recursive function.
    // int n;
    // printf("Enter a number here: ");
    // scanf("%d", &n);
    // int sum= recursiveFun5(n);
    // printf("The sum is : %d", sum);

    //6. Print sum of first n even natural number using recursive function.
    int n;
    printf("Enter a number here: ");
    scanf("%d", &n);
    int sum= recursiveFun6(n);
    printf("The sum is : %d", sum);
    
    return(0);
}