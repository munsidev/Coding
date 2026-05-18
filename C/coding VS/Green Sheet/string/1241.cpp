#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char f[1001];
        char s[1001];
        int count=0;
        scanf(" %s %s",f,s);
        for(int j=strlen(f), k=strlen(s);j>=0;j--,k--){
            if(f[j]==s[k]){
                count++;
            }
            else{
                break;
            }
        }
        if(count==strlen(s)+1){
            cout<<"encaixa"<<endl;
        }
        else{
            cout<<"nao encaixa"<<endl;
        }
    }
    return 0;
}