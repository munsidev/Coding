#include<stdio.h>
struct student{
    char name[50];
    int id;
};
void output(struct student*n,int size)
{
    for(int j=0;j<size;j++)
    {
        printf("struct at index %d name: %s\n",j,n[j].name);
        printf("Id: %d\n",n[j].id);
    }
    return;
}
   
void input(struct student*n,int size)
{
    for(int i=0;i < size;i++)
    {
      printf("struct at index %d name:",i);
      scanf("%s",&n[i].name);
      printf("struct at index %d id:",i);
      scanf("%d",&n[i].id);
      printf("\n");
    }
    return;
}
     
int main()
{
    int n,i,j;
    printf("Enter the number of student : ");
    scanf("%d",&n);
    
    struct student s[n];
    input(s,n);
    output(s,n);
    return 0;
   
}