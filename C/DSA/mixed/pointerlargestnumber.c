#include<stdio.h>
int main (){
   printf("pointre in c: introduction") ;
   printf("\n");
   int x,y,z;
    x=100;
    y=20;
    z=50;
int *p1,*p2,*p3;
  p1=&x;
  p2=&y;
  p3=&z;
if(*p1 >*p2 && *p1>*p3){
printf("The largest number is :%d\n", *p1);
}

else if(*p2 >*p1 && *p2>*p3){
printf("The largest number is :%d\n", *p2);
}


else{
printf("The largest number is :%d\n", *p3);
}
return 0;

}


