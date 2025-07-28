#include <stdio.h>
int main(void){
  int n, m; // n 바구니몇개, m 반복횟수 ㅇㅋ
  scanf("%d %d", &n, &m);
  int list[100]={0};

  int i, j, k;
  for (int a=0; a<m; a++){
    scanf("%d %d %d", &i, &j, &k);
    for (int b=i-1; b<j; b++){
      list[b]=k;
    }
  }

  for (int a=0; a<n;a++){
    printf("%d ", list[a]);
  }
  printf("\n");
}