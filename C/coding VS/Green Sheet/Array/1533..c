#include<stdio.h>
int find_index(int arr[],int n){
    int max1,max2,x=0;
    max1=max2=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max1){
            max1=arr[i];
        }
    }
    if(max1==arr[0]){
        max2=arr[1];
        x=1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max2&&arr[i]<max1){
            max2=arr[i];
            x=i;
        }
    }
    return x+1;
}
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int index_number=find_index(arr,n);
        printf("%d\n",index_number);
    }
    return 0;
}