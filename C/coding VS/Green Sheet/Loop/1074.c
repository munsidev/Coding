#include<stdio.h>
int main()
    {
      int a,b;
      scanf("%d",&a);
      int i=1;
      while(i<=a)
      {
        scanf("%d",&b);
        if(b>0)
        {
            if(b%2==0)
            {
                printf("EVEN POSITIVE\n");
            }
            else{
                printf("ODD POSITIVE\n");
            }
        }
        else if(b<0)
        {
            if(b%2==0)
            {
                printf("EVEN NEGATIVE\n");
            }else{
                printf("ODD NEGATIVE\n");
            }
        }
        else{
            printf("NULL\n");
        }
        i++;
      }
      return 0;
    }
