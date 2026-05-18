#include<stdio.h>
int main(){
    int arr[2001]={0};
    int n;
    int a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        arr[a]++;
    }
    for(int i=0;i<=2000;i++){
        if(arr[i]>0){
            printf("%d aparece %d vez(es)\n",i,arr[i]);
        }
    }
    return 0;
}