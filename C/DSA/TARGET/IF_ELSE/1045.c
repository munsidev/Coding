#include<stdio.h>
int main()
{
    double a,b,c,temp;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(b>a && b>c)
    {
       temp=b;
       b=a;
       a=temp;  
    }
    else if(c>a && c>b)
    {
        temp=c;
        c=a;
        a=temp;   
    }
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(a*a==b*b+c*c)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if(a*a>b*b+c*c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(a*a<b*b+c*c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(a==b&&b==c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if(a==b&&b!=c || a==c&&b!=c || b==c&&a!=c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    
      
    }
    return 0;
}