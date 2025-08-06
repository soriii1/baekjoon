#include <stdio.h>

int main(void){
    char arr[3];  
    scanf("%s", arr);

    if (arr[0]=='A') {
        if (arr[1]=='+') {printf("4.3\n");}
        else if (arr[1]=='0') {printf("4.0\n");}
        else if (arr[1]=='-') {printf("3.7\n");}
    }
    else if (arr[0]=='B'){
        if (arr[1]=='+') {printf("3.3\n");}
        else if (arr[1]=='0') {printf("3.0\n");}
        else if (arr[1]== '-') {printf("2.7\n");}
    }
    else if (arr[0]=='C'){
        if (arr[1]=='+') {printf("2.3\n");}
        else if (arr[1]=='0') {printf("2.0\n");}
        else if (arr[1]=='-') {printf("1.7\n");}
    }
    else if (arr[0]=='D'){
        if (arr[1] == '+') {printf("1.3\n");}
        else if (arr[1] == '0') {printf("1.0\n");}
        else if (arr[1] == '-') {printf("0.7\n");}
    }
    else if (arr[0] == 'F') {
        printf("0.0\n");
    }
}
