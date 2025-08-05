#include <stdio.h> 
int main(void){
  int arr[8];
  int ascending=1;
  int descending=1;


  for (int i=0; i<8; i++){
    scanf("%d", &arr[i]);
  }

  for (int j=0; j<7;j++){
    if (arr[j]<arr[j+1]){
      descending=0;
    }
    else if (arr[j]>arr[j+1]){
      ascending=0;
    }
    else{
      ascending=0;
      descending=0;
    }
  }
  
  if (ascending){
    printf("ascending\n");
  }
  else if (descending){
    printf("descending\n");
  }
  else{ printf("mixed\n"); }

}