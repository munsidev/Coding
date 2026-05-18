#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int l[50000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }
    int c;
    scanf("%d",&c);
    int s[2500];
    for(int i=0;i<c;i++)
    {
        scanf("%d",&s[i]);
    }
    for(int i=0;i<c;i++)
    {
        int tal=-1,sml=-1;
        for(int j=0;j<n;j++)
        {
            if(l[j]<s[i]){
                if(sml==-1||l[j]>sml)
                sml=l[j];
            }
            else if(l[j]>s[i])
            {
                if(tal==-1||l[j]<tal)
                tal=l[j];

            }
           
        }
        if(sml==-1){
        printf("X ",sml);}
        else{
        printf("%d ",sml);}
       if(tal==-1){
            printf("X\n");
        }else{
            printf("%d\n",tal);
        }
    }
    return 0;

}