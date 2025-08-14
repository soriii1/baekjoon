#include <stdio.h>
// #include <string.h>

int main(void){
  char sentence[1000000]={0};
  
  scanf("%[^\n]", sentence);

  int word=0;
  int sum=0;

  for (int i=0; sentence[i]!='\0'; i++){
    if (sentence[i]!=' ' && sentence[i] != '\n'){
      if(!word){
        sum++;
        word=1;
      }
    }
    else{
      word=0;
    }

    
  }
  printf("%d\n", sum);



  /** int sum=0;
  char* token=strtok(sentence, " \n");
  while (token!= NULL){
    sum+=1;
    token = strtok(NULL, " \n");
  }
  printf("%d\n", sum); */

}