//Code a program create Student Management Software in C.
#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"stdlib.h"
#include"windows.h"
#include"unistd.h"
#include"stdbool.h"

struct studentInfo{
    char ID[10];
    char Name[20];
    char Email[30];
    char Phone[20];
};

struct studentInfo students[100];

// Some global variables.
bool IsRunning= true;
char stduentID[10];
int TotalStudents= 0;
int i, j;

//Function declaration.
void Menu();
void GoBackOrExit();
void DeleteAllStudents();
void ShowAllStudents();
void DataSeed();
void ExitProject();
void UserGuideline();
void AboutUs();
int SearchStudent(char studentID[10]);
void DeleteStudent(int StudentIndex);
void AddNewStudent();
void EditStudent(int StudentFoundIndex);

int main(){
    printf("Student Management Software in C.\n\n");

    DataSeed();

    while(IsRunning){
        system("cls");
        Menu();
        int option;
        scanf("%d", &option);
        switch(option){
            case 0:{
                IsRunning = false;
                ExitProject();
                break;
            }
            case 1:{
                system("cls");
                printf("\n\t\t **** Add A New Student ****\n\n");
                AddNewStudent();
                GoBackOrExit();
                break;
            }
            case 2:{
                system("cls");
                printf("\n\t\t **** All Student ****\n\n");
                ShowAllStudents();
                GoBackOrExit();
                break;
            }
            case 3:{
                system("cls");
                printf("\n\t\t **** Search students ****\n\n");
                printf(" Enter The Student ID: ");
                scanf("%s", stduentID);
                int isFound= SearchStudent(stduentID);
                if(isFound < 0){
                    printf("No Student Found.\n\n");
                }
                printf("\n");
                GoBackOrExit();
                break;
            }
            case 4:{
                system("cls");
                printf("\n\t\t **** Edit a Student ****\n\n");
                printf(" Enter The Student ID: ");
                scanf("%s", stduentID);
                int StudentFoundIndex = SearchStudent(stduentID);
                if(StudentFoundIndex >= 0){
                    EditStudent(StudentFoundIndex);
                }
                else{
                    printf(" No Student Fount. \n\n");
                }
                GoBackOrExit();
                break;
            }
            case 5:{
                system("cls");
                printf("\n\t\t **** Delete a Student ****\n\n");
                printf(" Enter The Student ID: ");
                scanf("%s", stduentID);
                
                int DeleteStudentFoundIndex= SearchStudent(stduentID);

                if(DeleteStudentFoundIndex >= 0){
                    char Sure= 'N';
                    getchar();
                    printf("\n\n");
                    printf("Are you sure want to delete this student? (Y/N):");
                    scanf("%c", &Sure);

                    if(Sure == 'Y' || Sure == 'y'){
                        DeleteStudent(DeleteStudentFoundIndex);
                    }
                    else{
                        printf(" Your Data is Safe.\n\n");
                        GoBackOrExit();
                    }
                }
                else{
                    printf(" No Student Found.\n\n");
                    GoBackOrExit();
                }
                break;
            }
            case 6:{
                system("cls");
                DeleteAllStudents();
                GoBackOrExit();
                break;
            }
            case 7:{
                system("cls");
                break;
            }
            case 8:{
                system("cls");
                UserGuideline();
                GoBackOrExit();
                break;
            }
            case 9:{
                system("cls");
                AboutUs();
                GoBackOrExit();
                break;
            }
            case 10:{
                system("cls");

                // GoBackOrExit();
                break;
            }
            default :{
                printf("Invalid Input ...... \n");
                GoBackOrExit();
                break;
            }
        }
    }

    
    return(0);
}

void Menu(){
    system("cls");
    printf("\n\n\t *** Student Management System using C. ***\n\n");
    printf("\t\t MAIN MENU\n");
    printf("\t\t====================================\n");
    printf("\t\t[1] -> Add A New Student.\n");
    printf("\t\t[2] -> Show All Students.\n");
    printf("\t\t[3] -> Search A Student.\n");
    printf("\t\t[4] -> Edit A Student.\n");
    printf("\t\t[5] -> Delete A Student.\n");
    printf("\t\t[6] -> Delete All Students.\n");
    printf("\t\t[7] -> Clear The Window.\n");
    printf("\t\t[8] -> User Guideline.\n");
    printf("\t\t[9] -> About Us.\n");
    printf("\t\t[10] -> Logout.\n");
    printf("\t\t[0] -> Exit The Program.\n");
    printf("\t\t====================================\n");
    printf("\t\t=== Total Student : %d ==\n", TotalStudents);
    printf("\t\t====================================\n");
    printf("\t\tEnter The Choice : ");
    
}

void GoBackOrExit(){
    getchar();
    char option;
    printf(" Go back(b)? or Exit(0)?: ");
    scanf("%c", &option);
    if(option == '0'){
        ExitProject();
    }
    else{
        system("cls");
    }
}

void DeleteAllStudents(){
    TotalStudents= 0;
    printf(" All Students Deleted Successfully.\n\n");
    GoBackOrExit();
}

void ShowAllStudents(){
    printf("|==========|====================|==============================|====================|\n");
    printf("|    ID    |        Name        |            Email             |       Phone        |\n");
    printf("|==========|====================|==============================|====================|\n");
    for(i= 0; i< TotalStudents; i++){
        printf("|");
        printf("%s", students[i].ID);
        for(j= 0; j< (10- strlen(students[i].ID)); j++){
            printf(" ");
        }
        printf("|");
        printf("%s", students[i].Name);
        for(j= 0; j< (20- strlen(students[i].Name)); j++){
            printf(" ");
        }
        printf("|");
        printf("%s", students[i].Email);
        for(j= 0; j< (30- strlen(students[i].Email)); j++){
            printf(" ");
        }
        printf("|");
        printf("%s", students[i].Phone);
        for(j= 0; j< (20- strlen(students[i].Phone)); j++){
            printf(" ");
        }
    printf("|\n");
        printf("|----------|--------------------|------------------------------|--------------------|\n");
    }
    printf("\n");
}

void DataSeed(){
    // store some dummy student data for testing purpose.
    strcpy(students[0].ID, "St1");
    strcpy(students[0].Name, "Student1");
    strcpy(students[0].Phone, "1110001100");
    strcpy(students[0].Email, "studnet1@gmail.com");
    
    strcpy(students[1].ID, "St2");
    strcpy(students[1].Name, "Student2");
    strcpy(students[1].Phone, "1110001102");
    strcpy(students[1].Email, "studnet2@gmail.com");

    strcpy(students[2].ID, "St3");
    strcpy(students[2].Name, "Student3");
    strcpy(students[2].Phone, "1110001103");
    strcpy(students[2].Email, "studnet3@gmail.com");

    strcpy(students[3].ID, "St4");
    strcpy(students[3].Name, "Student4");
    strcpy(students[3].Phone, "1110001104");
    strcpy(students[3].Email, "studnet4@gmail.com");

    strcpy(students[4].ID, "St5");
    strcpy(students[4].Name, "Student5");
    strcpy(students[4].Phone, "1110001105");
    strcpy(students[4].Email, "studnet5@gmail.com");

    TotalStudents= 5;

}

void ExitProject(){
    system("cls");
    int i;
    char ThankYou[100]= " === Thank You Exploring My Software. ===\n";
    char SeeYouSoon[100]= " ============= See You Soon. ============\n";
    for(i= 0; i< strlen(ThankYou); i++){
        printf("%c", ThankYou[i]);
        Sleep(35);
    }
    for(i= 0; i< strlen(SeeYouSoon); i++){
        printf("%c", SeeYouSoon[i]);
        Sleep(35);
    }
    exit(0);
}

void UserGuideline(){
    printf("\n\t\t **** How it works? ****\n\n");
    printf(" -> You will only able to store the sudent's ID, Name, Email, Phone number.\n");
    printf(" -> A student can have maximum 4 courses and minimum 1 mourse.\n");
    printf(" -> Student Name can be maximum 20 characters lone.\n");
    printf(" -> Student Email can be maximum 30 characters long and Unique for every students.\n");
    printf(" -> Student Phone number can be maximum 20 characters long and Unique for every students.\n");
    printf(" ->> Visti https://sites.google.com/view/codingwill/home for more project like this. <<-\n\n");
}

void AboutUs(){
    printf("\n\t\t **** About Us? ****\n\n");
    printf(" Some important note we should remember.\n");
    printf(" -> This is a simple student record management system project.\n");
    printf(" -> You can modify the source code.\n");
    printf(" -> You can use this project only for personal purpose not for business.\n\n");
    printf(" ->> Visti https://sites.google.com/view/codingwill/home for more project like this. <<-\n\n");
}

int SearchStudent(char studentID[10]){
    system("cls");
    int studentFoundIndex= -1;
    int i;
    for(i= 0; i< TotalStudents; i++){
        if(strcmp(studentID, students[i].ID)== 0){
            studentFoundIndex= i;
            printf("\n One Student Found For ID: %s\n\n", stduentID);
            printf(" Student Information\n");
            printf("------------------------------\n");

            printf(" ID:    %s\n", students[i].ID);
            printf(" Name:  %s\n", students[i].Name);
            printf(" Email: %s\n", students[i].Email);
            printf(" Phone: %s\n", students[i].Phone);
        }
    }
    return studentFoundIndex;
}

void DeleteStudent(int StudentIndex){
    for(int i= 0; i< TotalStudents; i++){
        if(i >= StudentIndex){
            students[i]= students[i+1];
        }
    }
    TotalStudents--;
    printf(" Student Deleted Successfully.\n\n");
    GoBackOrExit();
}

void AddNewStudent(){
    char StudentID[300];
    char Name[300];
    char Phone[300];
    char Email[300];

    int IsValidID= 0;
    while(!IsValidID){
        printf(" Enter The ID: ");
        scanf("%s", &StudentID);
        IsValidID= 1;
    }

    int IsValidName= 0;
    while(!IsValidName){
        printf(" Enter The Name: ");
        scanf("%s", &Name);
        IsValidName= 1;
    }

    int IsValidPhone= 0;
    while(!IsValidPhone){
        printf(" Enter The Phone No: ");
        scanf("%s", &Phone);
        IsValidPhone= 1;
    }

    int IsValidEmail= 0;
    while(!IsValidEmail){
        printf(" Enter The Email: ");
        scanf("%s", &Email);
        IsValidEmail= 1;
    }

    strcpy(students[TotalStudents].ID, StudentID);
    strcpy(students[TotalStudents].Name, Name);
    strcpy(students[TotalStudents].Phone, Phone);
    strcpy(students[TotalStudents].Email, Email);
    TotalStudents++;

    printf("\n Student Added Successfully.\n\n");
}

void EditStudent(int StudentFoundIndex){
    printf("\n\t\t **** Update The Student ****\n\n");

    char StudentID[300];
    char NewName[300];
    char NewPhone[300];
    char NewEmail[300];
    strcpy(StudentID, students[StudentFoundIndex].ID);

    int IsValidName= 0;
    while(!IsValidName){
        printf(" Enter The New Name(0 for skip): ");
        scanf("%s", &NewName);
        IsValidName= 1;
    }

    int IsValidPhone= 0;
    while(!IsValidPhone){
        printf(" Enter The New Phone No(0 for skip): ");
        scanf("%s", &NewPhone);
        IsValidPhone= 1;
    }

    int IsValidEmail= 0;
    while(!IsValidEmail){
        printf(" Enter The New Email(0 for skip): ");
        scanf("%s", &NewEmail);
        IsValidEmail= 1;
    }

    if(strcmp(NewName, "0") != 0){
        strcpy(students[StudentFoundIndex].Name, NewName);
    }
    if(strcmp(NewPhone, "0") != 0){
        strcpy(students[StudentFoundIndex].Phone, NewPhone);
    }
    if(strcmp(NewEmail, "0") != 0){
        strcpy(students[StudentFoundIndex].Email, NewEmail);
    }
    printf("\n Student Updated Successfully.\n\n");
}