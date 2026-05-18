#include<stdio.h>
#include<stdlib.h>
int main (){
int *ptr; 
ptr=(int *)calloc(5, sizeof(int));
if(ptr == NULL){
    printf("memory not allocated,\n");
}
else{
  printf ("memory successfully allocated,\n");
}

return 0;
}