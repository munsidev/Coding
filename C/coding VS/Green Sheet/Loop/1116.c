#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
       int x,y;
       scanf("%d %d",&x,&y);
       
       if(y==0)
       {
        printf("divisao impossivel\n");
       }else{
        float div=(float)x/(float)y;
        printf("%0.1f\n",div);
       }
    }
    return 0;
}
