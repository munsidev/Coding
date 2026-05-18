#include<stdio.h>
    int main()
    {
        int i,j;
        int a[3][3];
        int x=0,y=0,z=0,n=0,m=0;
        
        int sum=0;

        for(i =0;i <3;++i)
        {
            for(j=0;j<3;++j)
            {
                scanf("%d",&a[i][j]);

            }
        }
 for(i = 0;i < 3;++i)
        {
            for(j=0;j<3;++j)
            {
               
               
                if(i==0 && j ==0){
                 x = a[i][j]; 
                }
               if(i==1 && j == 1)
               {
                 y = a[i][j];
               } 
               if(i==1 && j ==2)
               {
                 n= a[i][j];
               }            
               if(i==2 && j==2)
               {
                z = a[i][j];
               }  
               if(i==2 && j==1)
               {
                m = a[i][j];
               } 


            
        }


    }

     sum = (x) * ((y*z)-(m*n));
     printf("%d\n",sum);
}