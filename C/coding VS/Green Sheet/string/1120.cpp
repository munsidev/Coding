#include<stdio.h>
#include<string.h>
int main(){
    while (1){
        char c,s[101];
        scanf(" %c %s",&c,s);
        if (c=='0'&&strcmp(s,"0")==0){
            break;
        }
        int count=0;
        int len=strlen(s);
        for(int i=0;i<len;i++){
            if(s[i]=='0'||s[i]==c){
                continue;
            }
            else{
                printf("%c",s[i]);
                count++;
            }
        }
        if(count==0){
            printf("0\n");
        }
        else{
            printf("");
        }
    }
    return 0;
}
