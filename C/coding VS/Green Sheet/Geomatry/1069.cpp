#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        int c=0,d=0;
        char str[1001];
        scanf("%s",str);
        int len=strlen(str);
        for(int i=0;i<len;i++){
            if(str[i]=='<'){
                c++;
            }
            if(c==0){
                continue;
            }
            if(str[i]=='>'){
                c--;
                d++;
            }
        }
        printf("%d\n",d);
    }
    return 0;
}