#include<stdio.h>
void modi(int arr[]){
    int n=sizeof(arr);
    printf("%d\n",n);
}
int main(){
    int arr[5]={1,2,3,4,5};
    printf("\n");

    modi(arr);
    
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}