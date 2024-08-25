//Code a program create Student Management Software in C.
#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"stdlib.h"
#include"windows.h"
#include"unistd.h"
#include"stdbool.h"



// Some global variables.
bool IsRunning= true;
char stduentID[10];



int main(){
    printf("Student Management Software in C.\n\n");


    while(IsRunning){
        getch();
        system("cls");
        // Menu();
        printf("Enter a number here : ");
        int option;
        scanf("%d", &option);
        switch(option){
            case 0:{
                IsRunning = false;
                // ExitProject();
                break;
            }
            case 1:{
                system("cls");
                printf("\n\t\t **** Add A New Student ****\n\n");
                // AddNewStudent();
                // GoBackOrExit();
                break;
            }
            case 2:{
                system("cls");
                printf("\n\t\t **** All Student ****\n\n");
                // ShowAllStudents();
                // GoBackOrExit();
                break;
            }
            case 3:{
                system("cls");
                printf("\n\t\t **** Search students ****\n\n");
                printf(" Enter The Student ID: ");
                scanf("%s", stduentID);
                int isFound= 10;// SearchStudent(stduentID);
                if(isFound < 0){
                    printf("No Student Found.\n\n");
                }
                // GoBackOrExit();
                break;
            }
            case 4:{
                system("cls");

                // GoBackOrExit();
                break;
            }
            case 5:{
                system("cls");

                // GoBackOrExit();
                break;
            }
            case 6:{
                system("cls");

                // GoBackOrExit();
                break;
            }
            case 7:{
                system("cls");
                break;
            }
            case 8:{
                system("cls");
                // UserGuideline();
                // GoBackOrExit();
                break;
            }
            case 9:{
                system("cls");
                // AboutUs();
                // GoBackOrExit();
                break;
            }
            case 10:{
                system("cls");

                // GoBackOrExit();
                break;
            }
            default :{
                printf("Invalid Input ...... \n");
                // GoBackOrExit();
                break;
            }
        }
    }

    
    return(0);
}