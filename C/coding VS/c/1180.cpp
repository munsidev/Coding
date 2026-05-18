#include<stdio.h>
int main(){
    int N,position=-1;
    scanf("%d",&N);
    int x[N];
    for(int i=0;i<N;i++){
        scanf("%d",&x[i]);
    }
    int min=x[0];
    for(int i=0;i<N;i++){
        if(x[i]<min){
            min=x[i];
            position=i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,position);
    return 0;
}