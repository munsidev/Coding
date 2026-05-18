#include<stdio.h>
#include<stdlib.h>
int main (){
int *ptr1,*ptr2;
ptr1=(int *)malloc(20);
ptr2=(int *)calloc(5, sizeof(int));
if(ptr1 == NULL ||ptr2 ==NULL ){
    printf("memory not allocated,\n");
}
else{
  printf ("memory successfully allocated,\n");
  ptr1 = realloc(ptr1,50);
  printf("memory reallocation successfully,\n");
}

return 0;
}