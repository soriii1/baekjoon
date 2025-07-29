#include <stdio.h>
int main(void){

    int n;
    int list[31]={0};
   
    for (int i=0; i<28; i++){
      scanf("%d", &n);
      list[n]=1;
    }

    for (int j=1; j<31; j++){
      if (list[j]==0){
        printf("%d ", j);
      }
    }  
    printf("\n");
}
