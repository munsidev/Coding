#include<stdio.h>
#include<string.h>
int main()
{
    struct book{
        char name[20];
        int page;
        float prize;

    }a,b,c;
    printf("input the name of book 1: ");
    fgets(a.name,20,stdin);
    printf("\ninput the page no of book 1: ");
    scanf("%d",&a.page);
    printf("\ninput the prize of book 1: ");
    scanf("%f",&a.prize);

    printf("Name: %s; page: %d; prize: %0.2f",a.name,a.page,a.prize);
    return 0;
}