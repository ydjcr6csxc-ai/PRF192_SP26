#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
struct Point {
    int x;
    int y;
};
int main() {
  system("cls");
  printf("INPUT:\n");
  
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
   int n;
  scanf("%d", &n);

  struct Point a[n];

  for(int i = 0; i < n; i++) {
      scanf("%d %d", &a[i].x, &a[i].y);
  }
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  for(int i = 0; i < n; i++) {
      printf("(%d,%d)\n", a[i].x, a[i].y);
  }
  for(int i = 0; i < n; i++) {
      if(a[i].y > a[i].x) {
          printf("(%d,%d)\n", a[i].x, a[i].y);
      }
  }
 
 
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}