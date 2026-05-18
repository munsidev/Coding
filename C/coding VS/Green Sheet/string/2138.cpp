#include<stdio.h>
int main(){
    while(1){
        int f;
        int arr[1001];
        int c[1001]={0};
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            if(scanf("%d",&arr[i])==EOF){
                break;
            }
        }
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            if(arr[i]==arr[i+1]){
                c[i]++;
            }
            else{
                c[i]=0;
            }
        }
        int max=c[0];
        for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
            if(c[i]>max){
                max=c[i];
                f=i;
            }
        }
        printf("%d\n",arr[f]);
    }
    return 0;
}