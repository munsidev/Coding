#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d %d",&a,&b);
   if(a>b)
   {
     int temp=a;
    a=b;
    b=temp;
   }
   int i=a+1;
   while(i < b)
   {
    if(i%2 != 0)
    {
       sum  += i;
    }
    i++;
   }
   printf("%d\n",sum);
   return 0;

}