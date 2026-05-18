#include<stdio.h>
int main (){
   printf("pointre in c: introduction") ;
   int x=10;
   int *ptr;
   ptr = &x;
printf("value of x:%d\n", x);
printf("value of x:%d\n", *ptr);
return 0;
}