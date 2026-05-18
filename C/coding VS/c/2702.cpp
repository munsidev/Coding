#include<stdio.h>
int main() {
    int Ca,Ba,Pa;//available
    int Cr,Br,Pr;//order
    int unsatisfied=0;
    scanf("%d%d%d",&Ca,&Ba,&Pa);
    scanf("%d%d%d",&Cr,&Br,&Pr);
    if(Cr>Ca){
        unsatisfied=unsatisfied+Cr-Ca;
    }
    if(Br>Ba){
        unsatisfied=unsatisfied+Br-Ba;
    }
    if(Pr>Pa){
        unsatisfied=unsatisfied+Pr-Pa;
    }
    printf("%d\n",unsatisfied);
    return 0;
}
