#include<stdio.h>
struct student{
    char name[50];
    int id;
};
int main()
{
    int n,i,j;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    
    struct student s[n];
    
    for(i=0;i<n;i++)
    {
      printf("struct at index %d name:",i);
      scanf("%s",s[i].name);
      printf("struct at index %d id:",i);
      scanf("%d",&s[i].id);
      printf("\n");
    }
     for(j=0;j<n;j++)
     {
        printf("struct at index %d name: %s\n",j,s[j].name);
        printf("Id: %d\n",s[j].id);

     }

}