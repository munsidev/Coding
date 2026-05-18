#include<stdio.h>
typedef int* pointer;
int main()
{
    int x=5,y=7;
    //int* a=&x,b=&y-> error. int*a=&x and int b=&y ->Typedef solve this issue.
    pointer a=&x,b=&y; //correct way.
    //Address
    printf("%p\n%p\n",a,b);
    //Value
    printf("%d\n%d\n",*a,*b);
}