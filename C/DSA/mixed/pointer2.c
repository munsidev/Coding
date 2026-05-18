#include<stdio.h>
int main (){
   printf("pointre in c: introduction") ;
   char x='joyee';
   int *ptr;
   ptr = &x;
printf("value of x:%c\n", x);
printf("value of x:%c\n", *ptr);
return 0;
}