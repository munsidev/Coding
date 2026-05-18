#include<stdio.h>
int main(){
    int n,a,b;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int Og=0,Child=0;
        for(int i=0;i<n;i++){
            scanf("%d%d",&a,&b);
            if(a>b){
                Og++;
            }
            else if(a<b){
                Child++;
            }

        }
        printf("%d %d\n",Og,Child);
    }
    return 0;
}