#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);

    if(t%10!=0){
        printf("-1\n");
        return 0;
    }

    int a=0,b=0,c=0;

    a=t/300;
    t%=300;

    b=t/60;
    t%=60;

    c=t/10;

    printf("%d %d %d\n",a,b,c);
    return 0;
}
