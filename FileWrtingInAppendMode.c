//Code a program to Writing into a file in append mode.
#include"stdio.h"
int main(){
    printf("Writing into a file in append mode.\n\n");

    FILE *fptr= NULL;

    fptr= fopen("MyFile1.txt", "a");
    if(fptr == NULL){
        printf("File isn't opend/created because of some error.\n\n");
    }else{
        printf("File has been opend/created successfully.\n\n");
        char arr[50]= "What_is_your_age?\n";
        fprintf(fptr, arr);

        int roolno= 103;
        fprintf(fptr, "Roll No:- %d\n", roolno);

        printf("Data has been written successufully into file.");
        
    }
    fclose(fptr);
    
    return(0);
}