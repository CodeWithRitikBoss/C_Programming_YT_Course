//Code a program to use gotoxy function in C.
#include"stdio.h"
#include"stdlib.h"
#include<windows.h>

void gotoxy(int, int);

int main(){
    gotoxy(5, 10);
    printf("Gotoxy function in C.\n\n");
    
    gotoxy(10, 15);
    printf("Welcome");
    getch();
    
    return(0);
}

void gotoxy(int x, int y){
    COORD c;
    c.X= x;
    c.Y= y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}