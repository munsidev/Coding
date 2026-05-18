#include<stdio.h>
struct student{
    int id;
    float cgpa;
    char name[20];

};
int main()
{
    struct student s;
    printf("Enter your id: ");
    scanf("%d",&s.id);
    printf("\nEnter your cgpa: ");
    scanf("%f",&s.cgpa);
    printf("\nEnter your Name: ");
    scanf("%s",s.name);
    printf("\n Name: %s; id: %d; cgpa: %0.2f\n", s.name,s.id,s.cgpa);
    return 0;

}