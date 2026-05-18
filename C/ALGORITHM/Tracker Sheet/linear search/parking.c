#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    while(a!=0)
    {
        int t;
        scanf("%d",&t);
        int p[t];
        for(int i=0;i<t;i++)
        {
            scanf("%d",&p[i]);
        }
        int max=p[0],min=p[0];
        for(int i=0;i<t;i++)
            if(p[i]>max)
            max=p[i];
        
        for(int i=0;i<t;i++)
         if(p[i]<min)
         min=p[i];
         
         printf("%d\n",(max-min)*2);
         a--;
    }
    return 0;
}