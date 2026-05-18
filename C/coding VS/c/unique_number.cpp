#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int dup[n];
    for(int i=0;i<n;i++){
        dup[i]=0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup[i]=1;
                dup[j]=1;
                }
            }
        }
    for(int i=0;i<n;i++){
        if(dup[i]==0){
            
            printf("%d ",arr[i]);
        }
    }
    return 0;
}

