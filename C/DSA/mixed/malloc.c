#include<stdio.h>
#include<stdlib.h>
int main (){
int *ptr; 
  ptr =(int *) malloc( 5*sizeof(int));
if(ptr == NULL){
    printf("memory not allocated,\n");
}
else{
  printf ("memory allocation successful,\n");
}

return 0;
}