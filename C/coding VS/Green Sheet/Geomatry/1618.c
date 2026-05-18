#include<stdio.h>
int main()
{
    int n,ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d%d%d%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy,&rx,&ry);
        if(ax<=rx && ay<=ry && dy>=ry && bx>=rx)
        {
            printf("1\n");
        }else{
            printf("0\n");
        }

    }
    return 0;
}