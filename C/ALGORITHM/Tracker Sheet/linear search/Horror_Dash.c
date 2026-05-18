#include<stdio.h>
int main()
{
    int n,c=1;
    scanf("%d",&n);
    while(c<=n){
        int s;
        scanf("%d",&s);
        int sp[s];
        for(int i=0;i<s;i++)
        {
            scanf("%d",&sp[i]);

        }
        int max=sp[0];
        for(int i=0;i<s;i++)
        {
            if(sp[i]>=max)
            max=sp[i];
        }
        printf("Case %d: %d\n",c,max);
        c++;
    }
    return 0;
}


