//Code a program to Opening and Writing into a file.
#include"stdio.h"
int main(){
    printf("Opening and writing into a file.\n\n");

    FILE *fptr= NULL;

    fptr= fopen("MyFile1.txt", "w");
    if(fptr == NULL){
        printf("File isn't opend/created because of some error.\n\n");
    }else{
        printf("File has been opend/created successfully.\n\n");
        char arr[50]= "What_is_your_name?\n";
        fprintf(fptr, arr);

        int roolno= 102;
        fprintf(fptr, "Roll No:- %d\n", roolno);

        printf("Data has been written successufully into file.");
        
    }
    fclose(fptr);
    
    return(0);
}