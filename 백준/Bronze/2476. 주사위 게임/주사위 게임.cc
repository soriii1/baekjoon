#include <stdio.h>
int main(void){
  int n;
  int maxp=0;

  scanf("%d", &n);

  for (int i=0; i<n; i++){
    int a, b, c; 
    scanf("%d %d %d", &a, &b, &c);

    int p= 0;

    if (a == b && b == c){
      p= 10000+a*1000;
    } 
    else if(a == b || a == c){
      p=1000 +a*100;
    } 
    else if (b == c){
      p=1000+b*100;
    } 
    else {
      int max = a;
      if (b>max) {max = b;}
      if (c>max) {max = c;}
      p=max*100;
    }

    if (p> maxp){
      maxp = p;
    }
  }

  printf("%d\n", maxp);

}