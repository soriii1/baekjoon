#include <stdio.h>

int list[1000000] = {0};

int main(void){
  int n;
  int max=-1000000, min=1000000;
  scanf("%d", &n);

  if (n>1000000 || n<1){return 0;}
  int list[1000000]={0};

  for (int i=0; i<n; i++){
    scanf("%d", &list[i]);
  }
  for (int j=0; j<n; j++){
    if (max<list[j]){
      max=list[j];
    }
    if (min>list[j]){
      min=list[j];
    }
  }

 
  printf("%d %d\n", min, max);
  return 0;
}