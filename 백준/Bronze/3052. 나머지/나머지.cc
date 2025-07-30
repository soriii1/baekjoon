#include <stdio.h>
int main(void){
  int n;
  int sum=0;
  int list[43]={0};

  for (int i=0; i<10; i++){
    scanf("%d", &n);
    list[n%42]=1;
  }
  for (int i=0; i<42; i++){
    sum += list[i];
  }
  printf("%d\n", sum);
}