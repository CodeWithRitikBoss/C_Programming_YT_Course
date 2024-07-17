//Code a program to Open and close a file.
#include"stdio.h"
int main(){
    printf("Open and close a file.\n\n");

    FILE *fptr= NULL;

    fptr= fopen("MyFile1.txt", "a");
    if(fptr == NULL){
        printf("File isn't opend/created because of some error.");
    }else{
        printf("File has been opend/created successfully.");
    }
    fclose(fptr);
    
    return(0);
}