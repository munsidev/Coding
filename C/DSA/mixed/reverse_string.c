#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    char tmp;
    int i,j,size;
    printf("Enter a random string.\n");
    fgets(a,50,stdin);
    i=0;
    while(a[i]!='\0')
    {
        size++;
        i++;
    }
    int k=0;
    for(k=0,j=size-1;k<=j;k++,j--)
    {
          tmp=a[k];
          a[k]=a[j];
          a[j]=tmp;
    }
    puts("reverse string is:");
    puts(a);

}