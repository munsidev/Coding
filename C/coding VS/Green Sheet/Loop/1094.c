#include<stdio.h>
int main()
{
    int n,t=0,a,rabbit=0,rat=0,frog=0;
    char ch;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %c",&a,&ch);
        {
            t+=a;
            if(ch=='c'||ch=='C')
            {
               rabbit+=a;
            }
            if(ch=='r'||ch=='R')
            {
                rat+=a;
            }
            if(ch=='s'||ch=='S')
            {
                frog+=a;
            }

        }
    }
    float m,k,o;
    m=(float)(rabbit*100)/t;
    k=(float)(rat*100)/t;
    o=(float)(frog*100)/t;


    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);

    printf("Percentual de coelhos: %0.2f %\n",m);
    printf("Percentual de ratos: %0.2f %\n",k);
    printf("Percentual de sapos: %0.2f %\n",o);

    return 0;


}