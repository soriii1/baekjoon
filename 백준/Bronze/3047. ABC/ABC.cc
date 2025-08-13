#include <stdio.h>
int main(void){
  int nums[3];
  
  char abc[4];
  for (int i=0; i<3; i++){
    scanf("%d", &nums[i]);
  }
  scanf("%s", abc);

  int A=100;
  int B;
  int C=0;

  if(nums[0]<nums[1] && nums[0]<nums[2]) A=nums[0];
  else if(nums[1]<nums[0] && nums[1]<nums[2]) A=nums[1];
  else A=nums[2];

  if(nums[0]>nums[1] && nums[0]>nums[2]) C=nums[0];
  else if(nums[1]>nums[0] && nums[1]>nums[2]) C=nums[1];
  else C=nums[2];

    
  B = nums[0] + nums[1] + nums[2] - A - C;


  for (int i=0; i<3; i++){
    if (abc[i]=='A'){
      printf("%d ", A);
    }
    else if (abc[i]=='B'){
      printf("%d ", B);
    }
    else{printf("%d ", C);}
  }
  printf("\n");


}