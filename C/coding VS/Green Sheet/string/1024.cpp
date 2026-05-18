#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    char str1[1001],str2[1001];
    int x;
    cin>>x;
    getchar();
    while(x--){
    fgets(str1,sizeof(str1),stdin);
    str1[strlen(str1)-1]='\0';
    int n=strlen(str1);
        for(int i=0;i<n;i++){
        if((str1[i]>='A' && str1[i]<='Z') || (str1[i]>='a'&& str1[i]<='z'))
            str1[i] = str1[i] + 3;
        }
        int m=0;
        for(int i=n-1;i>=0;i--){
            str2[m]=str1[i];
            m++;
        }
        str2[m]='\0';
        int w=n/2;
        for(int i=w;i<n;i++){
            str2[i]=str2[i]-1;
        }
        printf("%s\n",str2);
    }
    return 0;
}