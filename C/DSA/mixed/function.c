#include<stdio.h>

int calsum(x,y,z)
int x,y,z;
{
    int d;
    d = x + y + z;
    return(d);
}
int main()
{
    int a,b,c,sum;
    printf("\nEnter any three number ");
    scanf("%d %d %d", &a,&b,&c);
    sum = calsum(a,b,c);
    
    printf("\nSum = %d",sum);

}
 