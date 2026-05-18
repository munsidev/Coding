#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;

    }
    for(int i=a+1;i<b;i++)
    {
        c=i%5;
        if(c==2 || c==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}