#include <stdio.h>
int main(){
    int X,Z=0,sum=0,count=0;
    scanf("%d",&X);
    while(Z<=X){
        scanf("%d", &Z);
    }
    for(int i=X;sum<=Z;i++){
        sum+=i;
        count++;
    }
    printf("%d\n",count);
    return 0;
}