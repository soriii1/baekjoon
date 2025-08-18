#include <stdio.h>
int main(void){
  int n, f1, f2;
  scanf("%d", &n);
  int computer[11]={0};


  for(int a=0; a<n; a++){
    scanf("%d %d", &f1, &f2);
    int result=1;
    if (f2%4==0){
      f2=4;
    }
    else{ f2= f2%4;}

    for (int i=0; i<f2; i++){
      result=(result*f1)%10;
    }

    if(result==0){
      printf("10\n");
      
    }
    else{ printf("%d\n", result);}
    
  }
    




}