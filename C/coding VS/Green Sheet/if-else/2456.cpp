#include<stdio.h>
int main(){
    int a,b,c,d,e;
    int count=0;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<b){
        count--;
    }
     if(b<c){
        count--;
    }
     if(c<d){
        count--;
    }
     if(d<e){
        count--;
    }
    if(a>b){
        count++;
    }
     if(b>c){
        count++;
    }
     if(c>d){
        count++;
    }
     if(d>e){
        count++;
    }
    if(count==-4)
    printf("C\n");
    else if(count==4)
    printf("D\n");
    else
    printf("N\n");
    return 0;
}