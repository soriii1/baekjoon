#include <stdio.h>
int main (void){
  int n;
  scanf("%d", &n);
  int j=1;
  for (int i=1; i<= n ; i++){
    for (int j=1; j<=n-i; j++){
      printf(" ");
    }

    for (int k=1; k<=i; k++){
      printf("*");
    }
    printf("\n");
  }
}