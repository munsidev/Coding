#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index=0;
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
        index=i+1;
        break;}
    }
    if(index==0){
        printf("0\n");
    }
    else{
        printf("%d\n",index);
    }
    return 0;
}