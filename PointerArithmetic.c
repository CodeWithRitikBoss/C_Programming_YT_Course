#include"stdio.h"
int main(){
    printf("Pointer Arithmetic in C.\n\n");

    // int a;
    // int *ptr;
    // ptr= &a;
    // printf("Enter the value of a : ");
    // scanf("%d", &a);

    // printf("The value of a is : %d\n", a);
    // printf("The address of a variable is : %x\n", ptr);
    // printf("The value of a is using pointer : %d\n", *ptr);
    // a++;
    // printf("The value of a is using pointer : %d\n", *ptr);
    // printf("The value of a is : %d\n", a);
    // a--;
    // printf("The value of a is using pointer : %d\n", *ptr);
    // printf("The value of a is : %d\n", a);

    //Array pointer Arithmetic in C.
    int arr[5]= {2, 5, 1, 8, 3};
    int *ptr= arr;

    printf("The valu at 0th index is : %d\n", arr[0]);
    printf("The vale at 0th index using pointer variable : %d\n", *ptr);
    printf("The valu at 0th index is : %d\n", arr[1]);
    printf("The vale at 0th index using pointer variable : %d\n", *(ptr+1));
    printf("The valu at 0th index is : %d\n", arr[2]);
    printf("The vale at 0th index using pointer variable : %d\n", *(ptr+2));

    //address.
    printf("\n\n");
    printf("The addres of 0th index : %x\n", &arr[0]);
    printf("The address of 0th index using pointer : %x\n", ptr);
    printf("The addres of 0th index : %x\n", &arr[1]);
    printf("The address of 0th index using pointer : %x\n", ptr+1);

    *ptr= 10;
    printf("The valu at 0th index is : %d\n", arr[0]);
    printf("The vale at 0th index using pointer variable : %d\n", *ptr);
    printf("The addres of 0th index : %x\n", &arr[0]);
    printf("The address of 0th index using pointer : %x\n", ptr);
    
    return(0);
}