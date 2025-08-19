#include <stdio.h>
int main(void){
  int n=1;
  while (n!=0){
    int count=0;
    scanf("%d", &n);
    if (n==0){return 0;}
    int a=n;
    while (a>0){
      
      int m=a%10;
      a=a/10;
      if (m==1){
        count=count+2;
      }
      else if (m==0){
        count+=4;
      }
      else{count+=3;}
      count++;
    }
    printf("%d\n", count+1);
  }
  


}