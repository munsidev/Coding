#include<stdio.h>
int main(){
    int n,c2=0,c3=0,c4=0,c5=0;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<n;i++){
        if(array[i]%2==0){
            c2++;
        }
        if(array[i]%3==0){
            c3++;
        }
        if(array[i]%4==0){
            c4++;
        }
        if(array[i]%5==0){
            c5++;
        }
    }
    printf("%d Multiplo(s) de 2\n",c2);
    printf("%d Multiplo(s) de 3\n",c3);
    printf("%d Multiplo(s) de 4\n",c4);
    printf("%d Multiplo(s) de 5\n",c5);
    return 0;
}