#include <stdio.h>
int main(void){
  int bingo[5][5];
  int SayWhat[25];

  for (int i=0; i<5; i++){
    for (int j=0; j<5; j++){
      scanf("%d", &bingo[i][j]);
    }
  }

  for (int count=0; count<25; count++){
    scanf("%d", &SayWhat[count]);

    for (int k=0; k<5; k++){
      for(int l=0; l<5; l++){
        if(SayWhat[count]==bingo[k][l]){
          bingo[k][l]=0;
        }
      }
    }
    int sum=0;

    for (int i=0; i<5; i++){
      int row=1;
      for (int j=0; j<5; j++){
        if (bingo[i][j]!=0){
          row=0;
        }
      }
      sum+=row;
    }
  
    for(int i=0; i<5; i++){
      int col=1;
      for (int j=0; j<5; j++){
        if (bingo[j][i]!=0){
          col=0;
        } 
      }
      sum+=col;
    }
  
    int d1=1, d2=1;
    for (int i=0; i<5; i++){
      if (bingo[i][i]!=0){d1=0;}
      if(bingo[i][4-i]!=0){d2=0;}
    }
    sum=sum+d1+d2;

    if (sum>=3){
      printf("%d\n",count+1);
      return 0;
    }
    
  }

  

  

  
}