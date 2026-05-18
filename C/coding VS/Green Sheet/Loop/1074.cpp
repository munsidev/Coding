#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]==0){
            printf("NULL\n");
        }
        else if(array[i]>0&&array[i]%2==0){
            printf("EVEN POSITIVE\n");
        }
        else if(array[i]>0&&array[i]%2!=0){
            printf("ODD POSITIVE\n");
        }
        else if(array[i]<0&&array[i]%2==0){
            printf("EVEN NEGATIVE\n");
        }
        else{
            printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}