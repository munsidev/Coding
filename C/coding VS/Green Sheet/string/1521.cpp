#include<stdio.h>
#include<string.h>
using namespace std;
int main(){
    int n,k;
    while(1){
        if(scanf("%d",&n)){
            break;
        }
        int arr[n+1];
        for(int i=1;i<=n;i++){
            scanf("%d",&arr[i]);
        }
        scanf("%d",&k);
        while(arr[k]!=k){
            k=arr[k];
        }
    }
    printf("%d\n",k);
}