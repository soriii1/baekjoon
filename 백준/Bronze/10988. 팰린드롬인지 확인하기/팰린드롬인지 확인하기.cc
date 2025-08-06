#include <stdio.h>

int main(void){
    char str[101];  
    int len = 0;
    int same = 1;

    scanf("%s", str);
    while (str[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len / 2; i++){
        if (str[i] != str[len - 1 - i]){
            same = 0; 
            break;
        }
    }

    if(same == 1){
        printf("1\n"); 
    } 
    else{
        printf("0\n"); 
    }

    return 0;
}
