#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        char string[100];
        fgets(string,sizeof(string),stdin);
        printf("%s\n","I am Toorg!");
    }
    return 0;
}