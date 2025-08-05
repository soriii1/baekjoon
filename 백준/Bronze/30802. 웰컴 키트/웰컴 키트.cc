#include <stdio.h>
int main(void){
  int n;
  int order[6];
  int t, p;
  int Tshrit=0;

  scanf("%d", &n); 

  for (int i=0; i<6; i++){
    scanf("%d", &order[i]);
  }

  scanf("%d %d", &t, &p); 

  for (int i=0; i<6; i++){
      Tshrit+=(order[i]+t-1)/t;
  }
  printf("%d\n", Tshrit);
  printf("%d %d\n", n/p, n%p);

}