#include <stdio.h>
int main(){
    unsigned int n,m;
    while(scanf("%u %u",&n,&m)==2){
        printf("%u\n",n^m);
    }
    return 0;
}