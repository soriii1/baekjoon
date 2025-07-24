#include <stdio.h>
int main(void){
  int n, m;
  scanf("%d", &n);
  if (n > 1000 || n <= 0) {return 1;}
  int list[1000]={0};

  for (int i=0; i<n; i++){
    scanf("%d", &list[i]);
  }

  scanf("%d", &m);
  int sum=0;

  for (int j=0; j<n; j++){
    if(list[j]==m){
      sum=sum+1;
    }
  }
  printf("%d\n", sum);
  return 0;

}