#include<stdio.h>
#include<string.h>
int main(){
    int c;
    scanf("%d",&c);
    while(c--){
        char string[10001];
        scanf("%s",string);
        int length=strlen(string);
        double time=length/100.0;
        printf("%.2f\n",time);
    }
    return 0;
}
