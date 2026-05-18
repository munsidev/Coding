#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[100],ch;
    printf("Enter a string.\n");
    fgets(a,100,stdin);
    printf("Enter any character for search.\n");
    ch =getchar();
    i=0;
    while(a[i]!='\0')
    {
        if(a[i]==ch)
        {
            printf("%c found in %d index.\n",ch,i);
        }
      i++;
    }
}