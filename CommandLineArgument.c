#include<stdio.h>
int main(int argc, char const *argv[])
{
    printf("The value of argc is : %d\n", argc);
    // printf("This argument at index : %d : is this :- %s\n", 0, argv[0]);
    for(int i = 0; i< argc; i++){
        printf("This argument at index : %d : is this :- %s\n", i, argv[i]);
    }

    return 0;
}