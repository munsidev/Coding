#include<stdio.h>
int main(){
    double score,sum=0.0;
    int count=0,x=1;
    while(x==1){
        while(count<2){
            scanf("%lf",&score);
            if(score>=0.0&&score<=10.0){
                sum+=score;
                count++;
            }
            else{
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n",sum/2.0);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&x);
        while(x<1||x>2){
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
        }
        count=0;
        sum=0.0;
    }
    return 0;
}
