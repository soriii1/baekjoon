#include <stdio.h>
int main(void){
  int n;
  int score[1001]={0};
  scanf("%d", &n);

  for (int i=0; i<n; i++){
    scanf("%d", &score[i]);
  }
  int max=0;
  double yam=0;
  for (int i=0; i<n; i++){
    if (max<score[i]){
      max=score[i];
    }
    yam+=score[i];
    
  }

  printf("%lf\n", ((yam/max)*100.0)/n);

}