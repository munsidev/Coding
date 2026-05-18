#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,c=0,d;
    scanf("%d %d",&x,&y);

    for(int i=0;i<n;i++)
    {
        if(a[i]==x){
            c++;
        if(c==y){
           printf("%d\n",i+1);
           return 0;
        }
    }
    }
    printf("-1\n");
    return 0;
}