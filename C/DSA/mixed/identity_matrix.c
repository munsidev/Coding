#include<stdio.h>
    int main()
    {
        int i,j,k;
        int a[3][3];
        
        

        for(i =0;i <3;++i)
        {
            for(j=0;j<3;++j)
            {
                scanf("%d",&a[i][j]);

            }
        }
        int idn=0;
       for(i =0;i <3;++i)
        {
            for(j=0;j<3;++j)
            {
              for(k=0;k<3;k++)
              {
                if(a[i][k]==1 && a[i][j]==0)
                {
                    idn = 1;
                }
              }

            }
        }
        if(idn==1)
        {
            printf("identity.\n");
        }
        else{
            printf("Not identity.\n");
}

}