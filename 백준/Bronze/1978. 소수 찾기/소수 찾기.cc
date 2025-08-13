#include <stdio.h>
int main(void){
  int n, m;
  scanf("%d", &n);
  int sum=0;

  for(int i=0; i<n; i++){
    int count=0;
    scanf("%d", &m);

    for (int j=1; j<=m; j++){
      if (m%j==0){
        count+=1;
      }
    }
    if (count==2){
      sum+=1;
    }
  }

  printf("%d\n", sum);
}