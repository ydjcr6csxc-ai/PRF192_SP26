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

  if(scanf("%d",&n)!=1 || n<=0){
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
  
  int found = 0;

  for(int i=0;i<n;i++){
      if(a[i] % 2 == 0){
          
          int appeared = 0;
          for(int j=0;j<i;j++){
              if(a[j] == a[i]){
                  appeared = 1;
                  break;
              }
          }

          if(!appeared){
              int count = 0;
              for(int k=0;k<n;k++){
                  if(a[k] == a[i]) count++;
              }

              printf("%d-%d",count,a[i]);
              found = 1;

              int more = 0;
              for(int t=i+1;t<n;t++){
                  if(a[t]%2==0){
                      int check=0;
                      for(int m=0;m<t;m++){
                          if(a[m]==a[t]) check=1;
                      }
                      if(!check){
                          more=1;
                          break;
                      }
                  }
              }
              if(more) printf("\n");
          }
      }
  }

  if(!found){
      printf("Not found");
  }

  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}