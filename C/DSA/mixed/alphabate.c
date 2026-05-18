#include<stdio.h>
#include<string.h>
int main()
{
    char name[50];
    int i;
    printf("Enter any Name:\n");
    fgets(name,50,stdin);
   
    i = 0;
    while(name[i]!='\0')
    {
        if(name[i]>='a' && name[i]<='z')
        {
            printf("%c",name[i]);
        }
        i++;
    }
    printf("\n\n");
    return 0;
}