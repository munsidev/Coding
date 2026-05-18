#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==n){
            printf("Ho!\n");
        }
        else
        printf("Ho ");
    }
    return 0;
}
