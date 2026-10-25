#include<stdio.h>
int main(){
    char x;
    scanf(" %c",&x);
    double a[12][12], r=0.0;

    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&a[i][j]);

        }
    }
         for(int i=0;i<12;i++)
        {
            for(int j=0;j<12;j++)
            {
                if(j<i)
                r+=a[i][j];
            }
        }
             if(x=='S'){
        printf("%.1lf\n",r);
    }

    if(x=='M'){
        r/=66;
        printf("%.1lf\n",r);
    }
    return 0;
}