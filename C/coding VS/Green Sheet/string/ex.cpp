#include<stdio.h>
#include<string.h>
int main(){
    char string[]="red3wan123";
    char string1[]="1234";
    int x=strcspn(string,string1);
    printf("%d\n%s\n",x,string);
    return 0;
}