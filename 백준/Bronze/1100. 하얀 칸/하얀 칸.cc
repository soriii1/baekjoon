#include <stdio.h>
int main(void){
  int chess[8][8]={0};
  char input[8][8]={0};
  int count=0;

  for(int i=0; i<8; i++){
    for (int j=0; j<8; j++){
      if (i==0 || i%2==0){
        if (j==0 || j%2==0){
          chess[i][j]=1;
        }
      }
      else{
        if(j%2!=0){
          chess[i][j]=1;
        }
      }

      scanf(" %c", &input[i][j]);

      if (chess[i][j]==1 && input[i][j]=='F'){
          count++;
      }
      
    }
  }
  printf("%d\n", count);

}