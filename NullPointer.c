#include"stdio.h"
int main(){
    printf("NULL Pointer.\n\n");

    int *ptr;
    printf("%x\n", ptr);

    int *ptrr= NULL;
    printf("%x\n", ptrr);
    
    return(0);
}