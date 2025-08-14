#include <stdio.h>
int main(void){

  long long int n;
  scanf("%lld", &n);
  int list[9]={0};
  int sum=0;

  for(int i=0; n>0; i++){
    list[i]=n%10;
    n=n/10;
    sum++;
  }

  int temp;
  for (int i=0;i<sum; i++){
    for (int j=i+1; j<sum; j++){
      if (list[i]<list[j]){
        temp=list[i];
        list[i]=list[j];
        list[j]=temp;
      }
    }  
  }

  for(int i=0; i<sum; i++){
    printf("%d", list[i]);
  }
  printf("\n");


}