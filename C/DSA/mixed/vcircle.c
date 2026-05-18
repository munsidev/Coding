#include<stdio.h>
int main (){
int a;
scanf("%d",&a);
if (a<0){
    printf("negative\n");
}
else if (a>0){
    printf("positive\n");
}
else {
    printf("zero\n");
}
return 0;
 }