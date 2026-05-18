#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
int main(){
    char str[101];
    while(fgets(str,sizeof(str),stdin)!=NULL){
        str[strcspn(str,"\n")]='\0';
        int length=strlen(str);
        if(length<6||length>32){
            printf("Senha invalida.\n");
        }
        else{
        bool upper=false,lower=false,digit=false,not_other_character=true;
        for(int i=0;i<length;i++){
            if(isupper(str[i])){
                upper=true;
            }
            else if(isdigit(str[i])){
                digit=true;
            }
            else if(islower(str[i])){
                lower=true;
            }
            else{
                not_other_character=false;
                break;
            }
        }
             if(upper&&lower&&digit&&not_other_character){
                printf("Senha valida.\n");
             }
             else{
                printf("Senha invalida.\n");
             }
    }
    }
    return 0;
}