#include<stdio.h>
int main(){
    int L,C,square,triangle;
    scanf("%d",&L);
    scanf("%d",&C);
    square=L*C+(L-1)*(C-1);
    triangle=2*(L-1)+2*(C-1);
    printf("%d\n",square);
    printf("%d\n",triangle);
    return 0;
}
