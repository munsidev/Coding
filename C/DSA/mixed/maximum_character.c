#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,max;
    char a[100];
    int freq[256];
    int ascii;
    printf("Enter any string.\n");
    fgets(a,100,stdin);
    for(i=0;i<256;i++)
    {
        freq[i]=0;
    }
    i=0;
    while(a[i]!='\0')
    {
            ascii = (int)a[i];
            freq[ascii] += 1;
            i++;
    }
    max=0;
    for(i=0;i<256;i++)
    {
        if(freq[i]>freq[max])
        {
           max = i;    
        }
    }
    printf("Maximux occured charecter is %c = %d times.\n",max,freq[max]);

}