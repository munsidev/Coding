#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
int main(){
    while(1){
        char s[1001];
        fgets(s,sizeof(s),stdin);
        s[strlen(s)-1]='\0';
        if(s[0]=='*'){
            break;
        }
        char firstChar = tolower(s[0]);
        int flag = 1;
        for (int i = 1; i < strlen(s); i++) {
            if (s[i - 1] == ' ' && tolower(s[i]) != firstChar) {
                flag = 0;
                break;
            }
        }
        if(flag==0){
            cout<<"N\n";
        }
        else{
            cout<<"Y\n";
        }
    }
    return 0;
}