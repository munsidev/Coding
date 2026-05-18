#include<stdio.h>
int main()
{
    int n[20],m[20],temp=0;
    int d=19;
    for(int i=0;i<20;i++)
    {
        scanf("%d",&n[i]);
    }
    for(int j=19,i=0;j>=0;j--,i++)
    {
        m[i]=n[j];
        printf("N[%d] = %d\n",i,m[i]);
    }
  
    return 0;
}