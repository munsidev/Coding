#include<stdio.h>
int main()
{
    int a[100],i,k=0;
    for(i=0;i<100;i++)
    {
        scanf("%d",&a[i]);

    }
    int max=a[0];
    for(int j=0;j<100;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
            k=j+1;

        }
    }
    printf("%d\n%d\n",max,k);
    return 0;
}