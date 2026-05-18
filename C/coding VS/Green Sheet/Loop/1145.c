#include<stdio.h>
int main()
{
    int i,j=0,x,y;
    scanf("%d %d",&x,&y);
    for(i=1;i<=y;i++)
    {
       printf("%d",i);
       j++;
       if(j%x==0)
       {
        printf("\n");
       }else{
        printf(" ");
       }
    }
    return 0;
}