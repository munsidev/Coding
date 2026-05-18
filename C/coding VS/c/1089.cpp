#include<stdio.h>
    int main(){
    int n,i,peaks;
    while(1){
        scanf("%d",&n);
        if(n==0)break;
        int h[n+2];
        for(i=1;i<=n;i++){
        scanf("%d",&h[i]);
        }
        h[0]=h[n];
        h[n+1]=h[1];
        peaks=0;
        for(i=1;i<=n;i++){
            if((h[i]>h[i-1]&&h[i]>h[i+1])||(h[i]<h[i-1]&&h[i]<h[i+1])){
            peaks++;
            }
        }
        printf("%d\n",peaks);
    }
    return 0;
}
