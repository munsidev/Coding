#include <stdio.h>
#include <string.h>
int main(){
    int C,N;
    char string[10];
    scanf("%d",&C);
    while(C--){
        scanf("%s %d",string,&N);
        if(strcmp(string,"Thor") == 0){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }
    }
    return 0;
}
