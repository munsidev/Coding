#include<stdio.h>
int main (){
int i,number,count=0;
printf("Enter a number\n:");
scanf("%d", &number);
for(i=2; i<=number/2;i++)
{
    if(number%i==0)
{

    count++;
    break;
}
}
    if(count==0 &&number!=1){
       printf("%d is a prime number\n", number);  
    }

else{
    printf("%d is not a prime number\n", number);
}
return 0;
}



