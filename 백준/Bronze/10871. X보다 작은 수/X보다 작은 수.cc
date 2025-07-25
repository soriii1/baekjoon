#include <stdio.h>
int main(void){
  int n,x, m;
  scanf("%d %d", &n, &x);
  if (n > 10000 || n <= 0) {return 0;}
  int list[10000]={0};

  for (int i=0; i<n; i++){
    scanf("%d", &list[i]);
  }

  for (int j=0; j<n; j++){
    if(list[j]<x){
      printf("%d ", list[j]);
    }
  }
  printf("\n");
  

}