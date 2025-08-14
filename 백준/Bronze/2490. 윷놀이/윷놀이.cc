#include <stdio.h>
int main(void){
  int a[4]={0};
  for(int i=0; i<3; i++){
    int count=0;

    for(int j=0; j<4; j++){
      scanf("%d", &a[j]);
      if (a[j]==1){
        count++;
      }
    }

    if(count==4){printf("E\n");}
    else if(count==3){printf("A\n");}
    else if(count==2){printf("B\n");}
    else if(count==1){printf("C\n");}
    else{printf("D\n");}
  }
}