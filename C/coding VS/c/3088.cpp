#include<stdio.h>
#include<string.h>
int main(){
    char string[1000];
    while(fgets(string,sizeof(string),stdin)){
        int n=strlen(string);
        if(string[n-1]='\n'){
            string[n-1]='\0';
            n--;
        }
        for(int i=0;i<n;i++){
            if(string[i]==' '&&(string[i+1]==','||string[i+1]=='.')){
                i++;
            }
            printf("%c",string[i]);
        }
        printf("\n");
    }
    return 0;
}