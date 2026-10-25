#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n=9,c=0;
   int section[n],bus[n]={20,20,20,20,20,20,20,20,20};
   for(int i=0;i<n;i++)
   {
    scanf("%d",&section[i]);
   }
   sort(section,section+n,greater<int>());
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
            c++;
        }
    }
    printf("\n%d\n",c);
    return 0;
}