//Code a program to Print patter part-3.
/*

1st Pattern.
A
B B
C C C
D D D D
E E E E E

2nd Pattern.
E
D D
C C C
B B B B
A A A A A

3rd Pattern.
A
A B
A B C
A B C D
A B C D E

4th Pattern.
E
E D
E D C
E D C B
E D C B A

*/

#include"stdio.h"
int main(){
  printf("Patter printing part-3\n\n");

  //1st Pattern.
  // for(int i= 1; i<= 5; i++){
  //   for(int j= 1; j<= i; j++){
  //     printf("%c ", (64+i)); //65- A, 66-B, 67-C, 68-D, 69-E
  //   }
  //   printf("\n");
  // }

  //2nd Pattern.
  // for(int i= 1; i<= 5; i++){
  //   for(int j= 1; j<= i; j++){
  //     printf("%c ", (70-i)); //65- A, 66-B, 67-C, 68-D, 69-E
  //   }
  //   printf("\n");
  // }

  //3rd Pattern.
  // for(int i= 1; i<= 5; i++){
  //   for(int j= 1; j<= i; j++){
  //     printf("%c ", (64+j)); //65-A, 66-B, 67-C, 68-D, 69-E
  //   }
  //   printf("\n");
  // }

  //4th Pattern.
  for(int i= 1; i<= 5; i++){
    for(int j= 1; j<= i; j++){
      printf("%c ", (70-j)); //65-A, 66-B, 67-C, 68-D, 69-E
    }
    printf("\n");
  }
  
  return(0);
}