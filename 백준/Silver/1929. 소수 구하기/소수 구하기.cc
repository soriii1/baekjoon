#include <stdio.h>
int main(void){
  int m, n; //m이상 n이하

  scanf("%d %d", &m, &n);
  
  for (int i=m; i<=n; i++){
    if (i < 2) {continue;}
    int sosu=1;
    for(int j=2; j*j<=i; j++){
      if(i%j==0){
        sosu=0;
        break;
      }
    }
    if (sosu){
      printf("%d\n", i);
    }
  }
}