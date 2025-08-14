#include <stdio.h>

int arr[1000000];
int tmp[1000000];

int main(void){
    int n,i,size,start,mid,end,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    size=1;
    while(size<n){
        start=0;
        while(start<n){
            mid=start+size;
            end=start+size*2;
            if(mid>n){mid=n;}
            if(end>n){end=n;}

            i=start;
            j=mid;
            k=start;

            while(i<mid&&j<end){
                if(arr[i]<=arr[j]) tmp[k++]=arr[i++];
                else tmp[k++]=arr[j++];
            }

            while(i<mid){
              tmp[k++]=arr[i++];
            }
              
            while(j<end){tmp[k++]=arr[j++];}

            start+=size*2;
        }
        for(i=0;i<n;i++){
          arr[i]=tmp[i];
        }
        size*=2;

    }

    for(i=0;i<n;i++){
      printf("%d\n",arr[i]);
    }
}
