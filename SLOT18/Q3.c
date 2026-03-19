#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
typedef struct {
    int id;
    char name[50];
} Book;
int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int n;
  scanf("%d", &n);

  Book *p;
  p = (Book*) malloc(n * sizeof(Book));
 for(int i = 0; i < n; i++) {
      scanf("%d", &(p + i)->id);
      scanf(" %[^\n]", (p + i)->name);
  }

  int x;
  scanf("%d", &x);
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
 int found = 0;

  for(int i = 0; i < n; i++) {
      if((p + i)->id == x) {
          printf("%d", (p + i)->id);
          found = 1;
          break;
      }
  }

  if(found == 0) {
      printf("Not found");
  }

  free(p);
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}