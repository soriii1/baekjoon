#include <stdio.h>
int main(void){
  int a=1; int b=1;
  while (a!=0 && b!=0){
    scanf("%d %d", &a, &b);
    if(a!=0 && b!=0){
      printf("%d\n", a+b);
    }
    else{
      return 0;
    }
  } 
}