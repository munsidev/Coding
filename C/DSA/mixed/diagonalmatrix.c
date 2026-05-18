#include<stdio.h>
int main()
{
    int n=3;
    int a[3][3];
    int tmp,i,j;

    printf("Enter a random matrix\n");
    for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&a[i][j]);

        }
    }               

printf("The matrix is:\n");
for(i=0;i<n;++i)
    {
        for(j=0;j<n;++j)
        {
            printf("%d ",a[i][j]);
            
        }
        printf("\n");
    }

    for(i=0;i<n;++i)
    {
        tmp=a[i][i];
        a[i][i]=a[i][n-i-1];
        a[i][n-i-1]=tmp;
    }
  printf("The matrix after digonal interchange.\n\n");
  for(i=0;i<n;++i)
  {
    for(j=0;j<n;++j)
    {
        printf("%d ",a[i][j]);
    }
    printf("\n");

  }
return 0;
}