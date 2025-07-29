#include <stdio.h>
int main (void){
  int n, m, temp;
  scanf("%d %d", &n, &m);
  if (n>100 || n<1){return 0;}

  int i, j;
  int list[101]={0};

  for (int a=0; a<=n; a++){
    list[a]=a+1;
  }

  for (int a=0; a<m; a++){
    scanf("%d %d", &i, &j);
    temp=list[i-1];
    list[i-1]=list[j-1];
    list[j-1]=temp;
  }

  for (int a=0; a<n; a++){
    printf("%d ", list[a]);
  }
  printf("\n");
  
}