#include<stdio.h>
#include<string.h>
int main(){
    while(1){
        char string[27];
        if(fgets(string,sizeof(string),stdin)==NULL){
            break;
        }
        string[strlen(string)]='\0';
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            int x;
            scanf("%d",&x);
            if(i==n-1){
                printf("%c\n",string[x-1]);
            }
            else{
                printf("%c",string[x-1]);
            }
        }
    }
    return 0;
}