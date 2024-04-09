#include"stdio.h"
int main(){

    int choice, a, b, result;
    printf("Please select your option.\n\n");
    printf("1 for Add two numbers.\n");
    printf("2 for Multiply two numbers.\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:{
            printf("Enter 1st number : ");
            scanf("%d", &a);
            printf("Enter 2nd number : ");
            scanf("%d", &b);
            result= (a+ b);
            printf("The addition of a and b is : %d", result);
            break;
        }
        case 2:{
            printf("Enter 1st number : ");
            scanf("%d", &a);
            printf("Enter 2nd number : ");
            scanf("%d", &b);
            result= (a* b);
            printf("The Multiply of a and b is : %d", result);
            break;
        }
        default :{
            printf("You enterd invalid value.");
            break;
        }
    }

    return 0;
}