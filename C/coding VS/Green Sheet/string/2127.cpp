#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char a[15],b[35];
    int t=1;
    while(scanf("%s %s",a,b)!=EOF){
        int l1=strlen(a),l2=strlen(b);
        int count=0,pos;
        for(int i=0;i<=l2-l1;i++){
            int flag=1;
            for(int j=0;j<l1;j++){
                if(a[j]!=b[i+j]){
                    flag=0;
                    break;
                }
            }
            if(flag){
                count++;
                pos=i+1;
            }
        }
        cout<<"Caso #"<<t<<":"<<endl;
        if(count>0){
            cout<<"Qtd.Subsequencias: "<<count<<endl<<"Pos: "<<pos<<endl<<endl;
        }
        else{
            cout<<"Nao existe subsequencia"<<endl<<endl;
        }
        t++;
    }
    return 0;
}