#include<stdio.h>
#include<string.h>
int main(){
    char L[500];
    fgets(L,sizeof(L),stdin);
    L[strcspn(L,"\n")]='\0';
    int length=strlen(L);
    if(length<=80){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}