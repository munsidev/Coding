#include<stdio.h>
int main()
{
    int n[15];
   int a[5];
   int b[5];
    int x=0;
    for(int i=0;i<15;i++)
    {
        scanf("%d",&n[i]);
    }

       
    for(int i=0;i<15;i++)
    {
         if(n[i]%2==0)
        {
            a[x]=n[i];
            printf("par[%d] = %d\n",x,a[i]);
            if(x==5)
            {
                x=0;
            }
        }
        if(n[i]%2!=0){
            b[x]=n[i];
             printf("impar[%d] = %d\n",x,b[i]);
             if(x==5)
            {
                x=0;
            }
        }
        x++;
    }
    }
