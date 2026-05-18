#include <stdio.h>

int main() {
   int x,z,count=0;
   scanf("%d",&x);
   int sum=0;
   while(z<=x)
   {
    scanf("%d",&z);
   }
   for(int i=x;sum<=z;i++)
   {
    
    sum+=i;
    count++;
   }
   printf("%d\n",count);
    
    return 0;
}
