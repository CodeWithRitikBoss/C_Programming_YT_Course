#include"stdio.h"
int main(){

    printf("Do while loop in C.\n");

    int table;
    printf("Enter a number here : ");
    scanf("%d", &table);

    int i= 1;
    do{
        printf("%d X %d = %d\n", table, i, (table* i)); //2 X 1 = 2
        i++;
    }while(i<= 10);


    /*
    1. Write a program to print first 10 Natural number.
    2. Write a program to print first 10 whole nuber.
    3. Write a program to print first 10 Even natural nuber.
    4. Write a program to print first 10 Odd natural nuber.
    5. Write a program to print table of N number.
    */

    return 0;
}==