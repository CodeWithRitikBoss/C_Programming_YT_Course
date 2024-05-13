//Code a program to use union in C.
#include"stdio.h"
#include"string.h"

union student{
    int id;
    char name[34];
};
// How many bytes structure will take in the mamory.?
// How many bytes union will take in the mamory.?

int main(){
    printf("Union in C.\n\n");

    union student s1;
    strcpy(s1.name, "Ritik");
    s1.id= 102;

    printf("The id is : %d\n", s1.id);
    printf("The name is : %s\n", s1.name);
    
    return(0);
}