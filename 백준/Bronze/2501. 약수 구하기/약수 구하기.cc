#include <stdio.h>
int main(void){
  int k, n;
  scanf("%d %d", &n, &k);


  int sum=0;

  for (int i=1; i<=n; i++){
    if (n%i==0){

      sum+=1;
      if (sum==k){
        printf("%d\n", i);
        return 0;
      }
    }
  }
  if (sum!=k){printf("0\n");}


}