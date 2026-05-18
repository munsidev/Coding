#include<stdio.h>
int main()
{
    int a,b,c,temp;
    scanf("%d%d%d",&a,&b,&c);
    int x=a,y=b,z=c;
    if(a>b)
    {
      temp=a;
      a=b;
      b=temp;
    }
    if(b>c)
    {
        temp=b;
        b=c;
        c=temp;
    }
    if(a>b)
    {
        temp=a;
        a=b;
        b=temp;
    }
    printf("%d\n%d\n%d\n",a,b,c);
    printf("\n%d\n%d\n%d\n",x,y,z);
    return 0;

}