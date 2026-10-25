#include<stdio.h>
int main()
{
    int i=0;
    printf("%d %d %d\n",++i, i++,++i); //with gcc output 3 1 3, with clang output is 1 1 3.
}
