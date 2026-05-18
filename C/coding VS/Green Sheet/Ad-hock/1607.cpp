#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        string a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else{
            int length=a.length();
            int count=0;
            for(int i=0;i<length;i++){
                if(a[i]==b[i]){
                    continue;
                }
                else{
                    if(a[i]<b[i]){
                        count+=b[i]-a[i];
                    }
                    else{
                        count+=(('z'-a[i]+1)+(b[i]-'a'));
                    }
                }
            }
            cout<<count<<endl;
        }
    }
    return 0;
}