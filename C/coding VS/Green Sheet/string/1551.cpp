#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        char s[1001];
        fgets(s,sizeof(s),stdin);
        s[strlen(s)-1]='\0';
        int x=strlen(s);
        int arr[26]={0};
        for(int i=0;i<x;i++){
            if(s[i]>='a'&&s[i]<='z'){
                arr[s[i]-'a']=1;
            }
        }
        int sum=0;
        for(int i=0;i<26;i++){
            sum=sum+arr[i];
        }
        if(sum==26){
            printf("frase completa\n");
        }
        else if(sum>=13){
            printf("frase quase completa\n");
        }
        else{
            printf("frase mal elaborada\n");
        }
    }
    return 0;
}