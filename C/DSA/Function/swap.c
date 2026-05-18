//pass by reference and using pointer.
#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x= *y;
    *y = temp;
    return;
}
int main()
{
    int a;
    printf("Enter the valu of a: ");
    scanf("%d",&a);
    int b;
     printf("Enter the valu of b: ");
    scanf("%d",&b);


    swap(&a,&b);
    printf("the swaped value of a = %d\n",a);
     printf("the swaped value of b = %d\n",b);
     return 0;
    
}