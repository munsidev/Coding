#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int array2[n]={0};
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;){
        if(i<0&&array[i]==0){
            break;
        }
        array2[i]=1;
        if(array[i]%2!=0){
            i+=1;
        }
        else{
            i-=1;
        }
        array[i]-=1;
    }
    int sum=0,visit=0;
    for(int i=0;i<n;i++){
        sum+=array[i];
        visit+=array2[i];
    }
    printf("%d %d\n",visit,sum);
    return 0;
}