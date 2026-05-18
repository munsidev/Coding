#include<stdio.h>
int main(){
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF){
        int a[x];
        for(int i=0;i<x;i++){
            scanf("%d",&a[i]);
        }
        int temp;
        for(int i=0;i<x;i++){
           for(int j=i+1;j<x;j++){
            if(a[i]<a[j]){
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
            }
           }
        }
        for(int i=0;i<y;i++){
            int p;
            scanf("%d",&p);
            printf("%d\n",a[p-1]);
        }
    }
    return 0;
}