#include<stdio.h>
int main()
{
    int i,j;
    int a[3][3];

    for(i =0;i <3;++i)
    {
        for(j=0;j<3;++j)
        {
            scanf("%d",&a[i][j]);

        }
    }
    int upper=0;
for(i =0;i <3;++i)
    {
        for(j=0;j<3;++j)
        {
          if(i>j && a[i][j] == 0)
          {
            upper =1;
           
          }

        }
    }
    if(upper==1)
    {
        printf("upper tiangular.\n");
    }
    else{
        printf("not upper triangular.\n");
    }


}