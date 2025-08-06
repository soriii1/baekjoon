#include <stdio.h>
int main(void){
  int score[5][4];
  int result[5];
  int sum;

  for (int i=0; i<5; i++){
    sum=0;
    for (int j=0; j<4; j++){
      scanf("%d", &score[i][j]);
      sum+=score[i][j];
    }
    result[i]=sum;
  }

  int max=result[0];
  int max_idx=1;
  for (int i=1; i<5; i++){
    if (max<result[i]){
      max=result[i];
      max_idx=i+1;
    }
  }
  printf("%d %d\n", max_idx, max);

}