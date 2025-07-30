#include <stdio.h>

int main(void){
    int h, m, n;
    scanf("%d %d", &h, &m);
    scanf("%d", &n);

    m+=n;
    h+=m/60;
    m=m%60;
    if(h>= 24){
        h=h%24;
    }

    printf("%d %d\n", h, m);
}
