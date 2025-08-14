#include <stdio.h>
int main(void){
  int n, m;
  int a,b;
  scanf("%d %d", &n, &m);
  int list[101]={0};

  for (int i=1; i<=n; i++){
    list[i]=i;
  }

  for (int i=0; i<m; i++){
    scanf("%d %d", &a, &b);
    while (a<b){
      int temp;
      temp=list[a];
      list[a]=list[b];
      list[b]=temp;
      a++;
      b--;
    }
    
  }
  for (int i=1; i<=n; i++){
    printf("%d ",list[i]);
  }
  printf("\n");
}