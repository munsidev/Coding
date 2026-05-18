#include<stdio.h>
int main(){
    int n,a,b;
    while(1){
        scanf("%d",&n);
        if(n==0){
            break;
        }
        int score_Of_Og=0,score_Of_Child=0;
        for(int i=0;i<n;i++){
            scanf("%d%d",&a,&b);
            if(a>b){
                score_Of_Og++;
            }
            else if(a<b){
                score_Of_Child++;
            }

        }
        printf("%d %d\n",score_Of_Og,score_Of_Child);
    }
    return 0;
}