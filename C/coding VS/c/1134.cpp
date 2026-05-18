#include<stdio.h>
int main(){
    int alcohol=0,gasoline=0,diesel=0,code;
    printf("MUITO OBRIGADO\n");
    while(1){
        scanf("%d",&code);
        if(code==4){
            break;
        }
        else if(code>=1&&code<=4){
            switch(code){
                case 1:
                    alcohol++;
                    break;
                case 2:
                    gasoline++;
                    break;
                case 3:
                    diesel++;
                    break;
            }
        }
        else{
            continue;
        }
    }
    printf("Alcool: %d\n",alcohol);
    printf("Gasolina: %d\n",gasoline);
    printf("Diesel: %d\n",diesel);
    return 0;
}