#include <stdio.h>
int main(void){
  char n[1000];
  int m;
  int sum=0;
  int y=1;

  scanf("%d", &m);
  for (int i=0; i<m; i++){
    y=0;
    sum=0;
    scanf("%s", n);
    for (int j=0; n[j]!='\0'; j++){
      if (n[j]=='O'){
        y++;
        sum+=y;
      }
      else{y=0;}
    }
  printf("%d\n", sum);
  }

}