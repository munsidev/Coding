#include<stdio.h>
#include<string.h>
int main()
{
    char a[100], b[100];
    int i;
    int equal;
    printf("Input string1:");
    fgets(a,100,stdin);
    printf("Input string2:");
    fgets(b,100,stdin);
    equal=1;
    for(i=0;a[i]!='\0',b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            equal=0;
        }
        
 }
    if(equal==1)
    {
        printf("Both string are equal.\n");
    }
    else{
        printf("Not Equal.\n");
        }

}