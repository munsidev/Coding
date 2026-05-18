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
    return i;
}
int main(){
    char string[101];
    input(string,sizeof(string));
    int i=0;
   while(string[i]!='\0'){
    i++;
   }
    int length=i;
    for(int i=0;i<length;i++){
        if(string[i]==','){
            printf("\n");
        }
        else{
            printf("%c",string[i]);
        }
    }
    printf("\n");
    return 0;
}