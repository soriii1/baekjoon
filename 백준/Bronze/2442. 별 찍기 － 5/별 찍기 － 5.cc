#include <stdio.h>
int main (void){
  int n;
  scanf("%d", &n);

  for (int j=1; j<=n; j++){
    for (int i=0; i<n-j; i++){
      printf(" ");
    }
    for (int k=0; k<2*j-1; k++){
      printf("*");
    }
    printf("\n");
  }
    
}