#include <stdio.h>
int main(void){
  int n;
  int sum=0;
  scanf("%d", &n);
  for(int i=1; i<=500; i++){
    for(int j=1; j<=500; j++){
      if ((i*i)-(j*j)==n){
        sum++;
      }
    }
  }
  printf("%d\n", sum);
}