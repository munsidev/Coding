#include<stdio.h>
#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        char x[101];
        cin.getline(x,101);
        int l=strlen(x);
        int m=l/2;
        for(int j=m-1;j>=0;j--){
            cout<<x[j];
        }
        for(int k=l-1;k>=m;k--){
            cout<<x[k];
        }
        cout<<endl;
    }
    return 0;
}
