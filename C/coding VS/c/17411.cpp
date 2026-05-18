#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=1;i<=n;i++){
        arr1[i]=i;
    }
    int m;
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if(arr1[i]!=arr2[j]){
                count++;
            }
        }
        if(count==m){
            printf("%d ",arr1[i]);
        }
        else{
            printf("*");
            break;
        }
    }
    return 0;
}