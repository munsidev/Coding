#include <stdio.h>
int main(){
    double array[12][12];
    char x;
    double sum= 0.0;
    scanf("%c",&x);
    for (int i=0;i<12;i++) {
        for (int j=0;j<12;j++) {
            scanf("%lf",&array[i][j]);
            if (i>j&&(j+i)<11) {
                sum+=array[i][j];
            }
        }
    }
    if (x=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/ 30.0);
    return 0;
}