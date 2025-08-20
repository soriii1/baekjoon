#include <stdio.h>
int main(void){

    int x[3];
    while(1){
        scanf("%d %d %d", &x[0], &x[1], &x[2]);
        if(x[0]==0 && x[1]==0 && x[2]==0){
          break;
        }

        
        for(int i=0;i<2;i++){
            for(int j=i+1;j<3;j++){
                if(x[i]>x[j]){
                    int temp = x[i];
                    x[i] = x[j];
                    x[j] = temp;
                }
            }
        }

        if(x[0]*x[0] + x[1]*x[1] == x[2]*x[2])
            printf("right\n");
        else
            printf("wrong\n");
    }
    


}