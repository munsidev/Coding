#include<stdio.h>
int main()
{
   int n,p;
   scanf("%d %d",&n, &p);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   int c=0;
   for(int i=0;i<n;i++)
   {
    if(a[i]<p)
    c++;
   }
   printf("%d\n",c);
   return 0;

}