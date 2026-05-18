#include<stdio.h>
int main(){
    double N;
    scanf("%lf",&N);
    int cents=(int)(N*100);
    int notes[]={10000,5000,2000,1000,500,200};
    int coins[]={100,50,25,10,5,1};
    printf("NOTAS:\n");
    for(int i=0;i<6;i++){
        int count=cents/notes[i];
        cents%=notes[i];
        printf("%d nota(s) de R$ %.2lf\n",count,notes[i]/100.0);
    }
    printf("MOEDAS:\n");
    for(int i=0;i<6;i++){
        int count=cents/coins[i];
        cents%=coins[i];
        printf("%d moeda(s) de R$ %.2lf\n",count,coins[i]/100.0);
    }
    return 0;
}
