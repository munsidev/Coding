#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    getchar();
    for(int i=0;i<n;i++){
        char str[51];
        fgets(str,sizeof(str),stdin);
        str[strlen(str)-1]='\0';
        for(int j=0;j<strlen(str);j++){
            if(j==0&&str[j]!=' '){
                cout<<str[j];
            }
            else if(str[j-1]==' '&&str[j]!=' '){
                cout<<str[j];
            }
        }cout<<endl;
    }
    return 0;
}