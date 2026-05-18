#include<stdio.h>
int main(){
    int array[1000];
    int n;
    scanf("%d",&n);
    for(int i=0,j=0;i<1000;i++,j++){
        array[i]=j;
        if(j==n-1){
            j=-1;
        }
        printf("N[%d] = %d\n",i,array[i]);
    }
    return 0;
}