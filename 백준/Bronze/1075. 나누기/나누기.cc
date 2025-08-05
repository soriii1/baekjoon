#include <stdio.h>
int main(void){
  int n, f, num;
  scanf("%d", &n);
  scanf("%d", &f);
  
  num=(n/100)*100;

  for (int i=0; i<100; i++){
    if ((num+i)%f==0){
        printf("%02d\n", i);
        break;
    }
  }
  
}