#include <stdio.h>
int main(){
    int N,Amount,total=0,rabbits=0,rats=0,frogs=0;
    char Type;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        scanf("%d %c", &Amount,&Type);
        total+=Amount;
        if(Type=='C'){
            rabbits+=Amount;
        } else if(Type=='R'){
            rats+=Amount;
        } else if(Type=='S'){
            frogs+=Amount;
        }
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbits);
    printf("Total de ratos: %d\n",rats);
    printf("Total de sapos: %d\n",frogs);
    printf("Percentual de coelhos: %.2f %%\n",(float)rabbits/total*100);
    printf("Percentual de ratos: %.2f %%\n",(float)rats/total*100);
    printf("Percentual de sapos: %.2f %%\n",(float)frogs/total*100);
    return 0;
}
