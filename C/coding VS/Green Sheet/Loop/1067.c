#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int i=1;
    while(i<=a)
    {
        if(i%2 !=0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}
