#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ph[n];
    scanf("%s",&ph);
    int check=0;
    for(int i=0;i<n;i++)
    {
        if(ph[i]=='8')
        check++;
    }
    int made;
    made=n/11;
    if(check>=made)
    printf("%d\n",made);
    else if(check<made&&n>11)
    printf("%d\n",check);
    else
    printf("0\n");
    return 0;
}