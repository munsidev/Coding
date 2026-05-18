#include<stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        double smallest=12.0,x;
        for(int i=0;i<n;i++){
            scanf("%lf",&x);
            if(x<smallest){
                smallest=x;
            }
        }
        printf("%.2lf\n",smallest);
    }
    return 0;
}