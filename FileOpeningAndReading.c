//Code a program to Open and reading a file.
#include"stdio.h"
int main(){
    printf("Open and reading a file.\n\n");

    FILE *fptr= NULL;

    fptr= fopen("MyFile1.txt", "r");
    if(fptr == NULL){
        printf("File isn't opend/created because of some error.\n\n");
    }else{
        printf("File has been opend/created successfully.\n\n");
        char arr[50];
        fscanf(fptr, "%s", arr);
        printf("%s", arr);
    }
    fclose(fptr);
    
    return(0);
}