#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = add(a,b);
    printf("Sum = %d",sum);
    return 0;
}