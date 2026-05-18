
#include <stdio.h>
 
int main()
{
    int j,n,m,i,a[50100],Q,start,end,flag,mid,left,right;
 
    scanf("%d",&n);
 
    for(i=0;i<n;i++)    scanf("%d",&a[i]);
 
    scanf("%d",&Q);
 
    for(j=0;j<Q;j++)
    {
        scanf("%d",&m);
        start=0;
        end=n-1;
        flag=0;
 
       while(start<=end)
       {
           mid=(start+end)/2;
 
           if(a[mid]==m)
           {
               for(i=mid-1;i>=0;i--)
               {
                   if(a[mid]==a[i])    continue;
                   else {
                       left=a[i];
                       break;
                   }
                }
                for(i=mid+1;i<n;i++)
                {
                    if(a[mid]==a[i])    continue;
                    else {
                        right=a[i];
                        break;
                     }
                 }
                 flag=1;
                 break;
             }
             else if(a[mid]>m)   end=mid-1;
             else start=mid+1;
         }
         if(flag)
         {
             if(a[mid]==a[0]&&a[mid]==a[n-1])    printf("X X\n");
             else if(a[mid]==a[0])    printf("X %d\n",right);
             else if(a[mid]==a[n-1]) printf("%d X\n",left);
             else printf("%d %d\n",left,right);
          }
          else
          {
              if(m<a[0])  printf("X %d\n",a[0]);
              else if(m>a[n-1])   printf("%d X\n",a[n-1]);
              else    printf("%d %d\n",a[end],a[start]);
          }
       }
 
    return 0;
}