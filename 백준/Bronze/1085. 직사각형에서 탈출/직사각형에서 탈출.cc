#include <stdio.h>
int main (void){
  int x, y, w, h;
  scanf("%d %d %d %d", &x, &y, &w, &h);
  int min=x;
  if (x>y){min=y;}
  if (w-x<min){min=w-x;}
  if (h-y<min){min=h-y;}
  printf("%d\n", min);


}