#include <stdio.h>
int main(void){
  int n;
  scanf("%d", &n);
  for (int i=1; i<=n; i++){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Case #%d: %d + %d = %d\n", i, a, b, a+b);
  }
}