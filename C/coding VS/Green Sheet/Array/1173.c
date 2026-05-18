#include<stdio.h>
int main()
{
    int n;
    int a[10];
    scanf("%d",&n);
    a[0]=n;
    for(int i=0;i<9;i++)
    {
       a[i+1]=a[i]*2;
         
    }
    for(int i=0;i<10;i++)
    {
        printf("N[%d] = %d\n",i,a[i]);
    }
    return 0;
}