#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char s[100];
        scanf("%s",&s);
        int c=0;
        int lenth=strlen(s);
        for(int i=0;i<lenth;i++)
        {
            if(s[i]=='1')
            c++;
        }
        int first1;
        for(int i=0;i<lenth;i++)
        {
            if(s[i]=='1')
            {
                first1=i;
                break;
            }
        }
        int search=0;
        for(int i=first1;i<lenth;i++)
        {
            if(s[i]=='1')
                search++;
            else
            break;
        }
        if(search==c&&c>0)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}