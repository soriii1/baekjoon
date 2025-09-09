#include <stdio.h>

int main(void)
{
   int n;
   scanf("%d", &n);
   
   for (int i=0; i<n; i++){
       char str[100];
       int sum=0;
       scanf("%s", str);
       int j=0;
       while (str[j]!='\0'){
            sum++;
            j++;
            
       }
       
       printf("%c%c\n", str[0], str[sum-1]);
   }
}