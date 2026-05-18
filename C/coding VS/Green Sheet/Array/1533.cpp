#include<stdio.h>
#include<limits.h>
int find_second_largest_index(int arr[],int n){
    int max=INT_MIN;
    int second_max=INT_MIN;
    int second_largest_values_index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<max&&arr[i]>second_max){
            second_max=arr[i];
            second_largest_values_index=i;
        }
    }
    return second_largest_values_index+1;
}
int main(){
    int n;
    while(scanf("%d",&n)&&n!=0){
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int x=find_second_largest_index(arr,n);
        printf("%d\n",x);
    }
    return 0;
}