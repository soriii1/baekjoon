#include <stdio.h>
int main(void){
  int n;
  long long candy;
  scanf("%d", &n);
  for (int i=0; i<n; i++){
    int m;
    long long sum = 0;
    scanf("%d", &m); 
    for(int j=0; j<m; j++){
      scanf("%lld", &candy);
      sum=(sum + candy) % m;
    }

    if (sum%m==0){
      printf("YES\n");
    }
    else{printf("NO\n");}
  }
}