#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main() {
  system("cls");
  printf("INPUT:\n");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

  int n;

  if(scanf("%d",&n) != 1 || n <= 0){
      printf("\nOUTPUT:\n");
      printf("Invalid input");
      printf("\n");
      system ("pause");
      return(0);
  }

  int a[100];

  for(int i=0;i<n;i++){
      scanf("%d",&a[i]);
  }


  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

  int even[100];
  int k=0;

  for(int i=0;i<n;i++){
      if(a[i] % 2 == 0){
          even[k++] = a[i];
      }
  }

  for(int i=0;i<k-1;i++){
      for(int j=i+1;j<k;j++){
          if(even[i] < even[j]){
              int temp = even[i];
              even[i] = even[j];
              even[j] = temp;
          }
      }
  }

  for(int i=0;i<k;i++){
      printf("%d",even[i]);
      if(i < k-1) printf("\n");
  }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}