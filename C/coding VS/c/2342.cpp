#include<stdio.h>
int main(){
    unsigned int N,P,Q,x;
    char C;
    scanf(" %d",&N);
    scanf("%u %c %u",&P,&C,&Q);
    if(C=='+'){
        x=P+Q;
    }
    else if(C=='*'){
        x=P*Q;
    }
    if(x<=N){
        printf("OK\n");
    }
    else{
        printf("OVERFLOW\n");
    }

    return 0;
}