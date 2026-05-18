#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];
    int sum=0;

    for(i =0;i <3;++i)
    {
        for(j=0;j<3;++j)
        {
            scanf("%d",&a[i][j]);

        }
    }
    int lower=0;
for(i =0;i <3;++i)
    {
        for(j=0;j<3;++j)
        {
          if(i<j && a[i][j] == 0)
          {
            lower =1;
           
          }

        }
 for(i =0;i <3;++i)
    {
        for(j=0;j<3;++j)
        {
           if(i>j)
           {
            sum +=a[i][j];
           }

        }
    }

    }
    if(lower==1)
    {
        printf("lower tiangular.\nThe sum of lower triangular is %d\n",sum);
    }
    else{
        printf("not lower triangular.\n");
        }


}
