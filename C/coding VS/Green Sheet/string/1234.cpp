#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
    while(1){
        char s[51];
        if(fgets(s,sizeof(s),stdin)==NULL){
            break;
        }
        s[strlen(s)-1]='\0';
        int flag=1;
        for(int i=0;i<strlen(s);i++){
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
                if(flag){
                    s[i]=toupper(s[i]);
                    flag=false;
                }
                else{
                    s[i]=tolower(s[i]);
                    flag=true;
                }
            }
        }
        printf("%s\n",s);
    }    
    return 0;
}