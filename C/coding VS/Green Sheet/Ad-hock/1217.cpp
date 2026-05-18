#include <stdio.h>
#include<string.h>
int main(){
    int n, i, j, num, kg;
    float preco, total;
    char fruits[10000];
    
    scanf("%d",&n);
    getchar();
    total = 0.0;
    kg = 0;
    for(i = 0; i < n; i++){
        num = 0;
        scanf("%f",&preco);
        getchar();
        total += preco;
        fgets(fruits,sizeof(fruits),stdin);
        fruits[strcspn(fruits,"\n")]='\0';
        for(j = 0; fruits[j] != '\0'; j++){
            if(fruits[j] == 32) num++;
        }
        kg += num+1;
        printf("day %d: %d kg\n",i+1,num+1);
     }
     printf("%.2f kg by day\n",(float)kg/n);
     printf("R$ %.2f by day\n",total/n);
     return 0;
}