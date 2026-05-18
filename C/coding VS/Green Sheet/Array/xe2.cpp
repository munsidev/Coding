#include<stdio.h>
#include<string.h>
int main(){
    char string1[]="redwan";
    char string2[3];
    strncpy(string2,string1,sizeof(string2));
    printf("%s\n",string2);
    return 0;
}
