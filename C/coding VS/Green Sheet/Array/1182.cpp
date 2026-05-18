#include<stdio.h>
int main(){
    int n;
    char x;
    double array[12][12], result=0.0;
    scanf("%d",&n);
    scanf(" %c",&x);
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%lf",&array[i][j]);
        }
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(j==n){
            result+=array[i][j];
            }
        }
    }
    if(x=='S'){
        printf("%.1lf\n",result);
    }
    if(x=='M'){
        result/=12;
        printf("%.1lf\n",result);
    }
    return 0;
}