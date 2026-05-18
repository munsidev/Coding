#include<stdio.h>
int main()
{
   int t,a[1000];
   scanf("%d",&t);
   for(int i=0,j=0;i<1000;i++,j++)

   {
      if(j==t)
      {
        j=0;
      }
      a[i]=j;
   }
   for(int i=0;i<1000;i++)
   {
    printf("N[%d] = %d\n",i,a[i]);
   }
   return 0;
}