#include <stdio.h>
int main (void){
  int n;
  int max=-100;
  int max_idx=0;

  for (int i=1; i<10; i++){
    scanf("%d", &n);
    if (n>100 || n<-100){
      return 0;
    }
    if (max<n){
      max=n;
      max_idx=i;
    }
  }
  
  printf("%d\n", max);
  printf("%d\n", max_idx);
}