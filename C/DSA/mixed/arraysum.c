#include<stdio.h>
int sum (int *a, int size){
   int i,sum=0;
   for(i=0; i<size; i++) {
sum= sum + *(a+i);
}
return sum;
}
int main (){
    int arr[3]={4,5,10};
    int result= sum (arr,3);
    printf("sum of the array is : %d", result);
    return 0;
}