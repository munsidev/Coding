#include<stdio.h>
int main()
{
    int a[8];
    for(int i=0;i<8;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<60)
        {
            printf("Not Eligible\n");
            return 0;
        }

    }
    printf("Eligible\n");
    return 0;
}