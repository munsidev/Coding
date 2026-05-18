/*
#include<stdio.h>
int tree(int n){
    int m=(n/2) +1;
    int st =1, sp = n/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=sp;j++){
            printf(" ");
        }
        for(int j=1;j<=st;j++){
            printf("*");
        }
        printf("\n");
        sp -= 1, st+=2;
    }
    st =1, sp = n/2; 
    for(int i=1;i<=2;i++){
        for(int j=1;j<=sp;j++){
            printf(" ");
        }
        for(int j=1;j<=st;j++){
            printf("*");
        }
        printf("\n");
        sp -= 1, st+=2;
    }

}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        
        tree(n);
    }
    return 0;
}
*/
#include<stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)==1){
        
       // tree(n);
       int m=(n/2) +1;
    int st =1, sp = n/2;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=sp;j++){
            printf(" ");
        }
        for(int j=1;j<=st;j++){
            printf("*");
        }
        printf("\n");
        sp -= 1, st+=2;
    }
    st =1, sp = n/2; 
    for(int i=1;i<=2;i++){
        for(int j=1;j<=sp;j++){
            printf(" ");
        }
        for(int j=1;j<=st;j++){
            printf("*");
        }
        printf("\n");
        sp -= 1, st+=2;
    }
    }
    return 0;
}