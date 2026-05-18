#include<stdio.h>
 int input(char string[],int n){
    int i;
    for(i=0;i<n-1;i++){
        string[i]=getchar();
        if(string[i]=='\n'){
            break;
        }
    }
    string[i]='\0';
}
int main(){{
    int i;
    scanf("%d",&i);
    while(i--){
        char string[101];
        input(string,sizeof(string));
    }
    return 0;
}}