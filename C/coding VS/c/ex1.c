#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char rstr[100];
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    strcpy(rstr,strrev(str));
    int x=strcmp(str,rstr);
    if(x==0){
        printf("x");
    }
    return 0;
}