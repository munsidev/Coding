#include<stdio.h>

int main(){
    int n, num;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &num);
        if(num == 2){
            printf("%d eh primo\n", num);
            continue;
        }
        int count = 0;
        for(int j = 2; j * j <= num; j++){
            if(num % j == 0){
                count++;
                break;
            }
        }
        if(count == 0 && num > 1){
            printf("%d eh primo\n", num);
        } else {
            printf("%d nao eh primo\n", num);
        }
    }
    return 0;
}
