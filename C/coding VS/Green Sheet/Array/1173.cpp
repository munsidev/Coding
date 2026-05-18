#include<stdio.h>
int main(){
  int N[10];
  int n;
  scanf("%d",&n);
  N[0]=n;
  for(int i=0;i<9;i++){
    N[i+1]=N[i]*2;
  }
  for(int i=0;i<10;i++){
    printf("N[%d] = %d\n",i,N[i]);
  }
  return 0;
}