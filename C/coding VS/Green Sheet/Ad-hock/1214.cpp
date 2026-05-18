#include <stdio.h>
int main(){
    int c;
    float sum,x;
    scanf("%d",&c);
    while(c > 0){
        int n;
        scanf("%d",&n);
        sum = x = 0;
        int num[n];
        for( int i = 0; i < n; i++){
            scanf("%d",&num[i]);
            sum+=num[i];
        }
        sum /= n;
        for(int i = 0; i < n; i++){
                if(num[i] > sum){
                    x++;
                }
        }
        printf("%.3f%c\n",x/n*100.000,'%');
        c--;
    }
    return 0;
}