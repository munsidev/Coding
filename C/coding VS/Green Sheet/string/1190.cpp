#include<stdio.h>
int main(){
    float arr[12][12],sum=0,average=0;
    char x;
    int count=0;
    scanf("%c",&x);
    getchar();
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            scanf("%f",&arr[i][j]);
        }
    }
    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            if(j>i&&j<11-i)
            sum=sum+arr[i][j];
            count++;
        }
    }
    average=sum/(float)count;
    if(x=='S'){
        printf("%f\n",sum);
    }
    else if(x=='M'){
        printf("%f\n",average);
    }
    return 0;
}