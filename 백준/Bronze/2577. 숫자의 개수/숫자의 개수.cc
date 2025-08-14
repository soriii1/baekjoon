#include <stdio.h>
int main(void){
  int a,b,c;

  scanf("%d\n", &a);
  scanf("%d\n", &b);
  scanf("%d", &c);

  int n=a*b*c;
  int count[10]={0};

  for (int i=1; n>0; i++){
    int m=n%10;
    count[m]++;
    n=n/10;
  }
  for (int i=0; i<10; i++){
    printf("%d\n", count[i]);
  }
}