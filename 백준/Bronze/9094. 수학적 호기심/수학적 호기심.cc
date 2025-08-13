#include <stdio.h>
int main(void){
  int t, n, m;
  
  scanf("%d", &t);
  for(int i=0; i<t; i++){
    int sum=0;
    scanf("%d %d", &n, &m);

    for(int j=1; j<n; j++){
      for(int k=j+1;k<n;k++){
        if((k*k+j*j+m)%(k*j)==0){
          sum++;
        }
      }
    }
    printf("%d\n", sum);
  }
}