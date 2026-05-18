#include<stdio.h>
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        for(int i=1;i<=n;i++){
            for(int j=i;j>0;j--){
                if(j==i){
                    printf("%d",j);
                }
                else{
                    printf("   %d",j);
                }
            }
            for(int j=1,x=2;j<=n-i;j++,x++){
                printf("   %d",x);
            }
            printf("\n");
        }
    }
    return 0;
}