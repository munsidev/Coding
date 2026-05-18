#include<stdio.h>
int main()
{
    int a,b,c,s=0;
    scanf("%d %d %d",&a,&b,&c);
    while(a--){
    for(int i=b;i<=c;i++)
    {
        s+=i;

    }
    printf("%d\n",s);
}
return 0;
}