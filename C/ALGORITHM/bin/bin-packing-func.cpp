#include<bits/stdc++.h>
using namespace std;
int bin(int section[],int n){
    int c=20,count=0;
    int bus[n];
    for(int i=0;i<n;i++)
    {
        bus[i]=c;
    }
    for(int i=0;i<n;i++)
    {
     for(int j=0;j<n;j++)
     {
         if(bus[j]>=section[i])
         {
             bus[j] = bus[j] - section[i];
             break;
         }
     }
 
    }
    for(int i=0;i<n;i++)
     {
         printf("%d ",bus[i]);
         if(bus[i] != 20)
         {
             count++;
         }
     }
     return count;
 }

int main()
{
   int n=9;
   int section[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&section[i]);
   }
   sort(section,section+n,greater<int>());
   int result;
   result=bin(section,n);
  printf("%d\n",result);
  return 0;
}