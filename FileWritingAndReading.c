//Code a program to Writing to a file and reading from a file.
#include"stdio.h"
#include"conio.h"
int main(){
    printf("Writing to a file and reading from a file.\n\n");

    FILE *fptr= NULL;

    fptr= fopen("MyFile1.txt", "a+");
    if(fptr == NULL){
        printf("File isn't opend/created because of some error.\n\n");
    }else{
        printf("File has been opend/created successfully.\n\n");
        
        // fputc('R', fptr);
        // char a;
        // a= fgetc(fptr);
        // printf("%c", a);

        // fprintf(fptr, "My_name_is_Ritik.\n");
        // printf("Wrte data successfully.\n");
        

        char arr[50];
        fscanf(fptr, "%s", arr);
        printf("%s", arr);
        printf("\nReading data successfully.\n");
        
    }
    fclose(fptr);
    
    return(0);
}