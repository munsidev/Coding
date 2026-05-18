#include <stdio.h>
#include <math.h>
int main(){
     int N,H,C,L;
    while (scanf("%d",&N)!=EOF){
        scanf("%d%d%d",&H,&C,&L);
        double length=sqrt(H*H+C*C);
        double totalArea=(length*L*N)/(float)10000;
        printf("%.4lf\n",totalArea);
    }
    return 0;
}