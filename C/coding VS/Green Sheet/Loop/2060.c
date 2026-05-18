#include<stdio.h>
int main()
{
    int n;
    int a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<n;j++)
    {
        if(x[j]%2==0)
        {
            a++;
        }
        if(x[j]%3==0)
        {
            b++;
        }
        if(x[j]%4==0)
        {
            c++;
        }
        if(x[j]%5==0)
        {
            d++;
        }
    }
        printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",a,b,c,d);
        return 0;
    
}