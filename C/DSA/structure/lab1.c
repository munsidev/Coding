#include<stdio.h>
struct student{
    char name[50];
    int marks[5];
};
int sumOfMarks(int *marks, int n);
void studentData(struct student *s);
int main()
{
    int n,i,j;
    printf("Enter the no of students:");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        printf("Enter name of student %d:",i+1);
        //fgets(s[i].name,n,stdin);
        scanf("%s",s[i].name);
        for(j=0;j<5;j++)
        {
            printf("Enter marks of subject %d: ",j+1);
            scanf("%d",&s[i].marks[j]);

        }
    }
    for(i=0;i<n;i++){
        studentData(&s[i]);
        int totalMarks=sumOfMarks(s[i].marks,5);
        printf("Total Marks for %s:%d\n",s[i].name,totalMarks);
    }
    return 0;
    }
    void StudentData(struct Student *s){
        printf("\nStudent Name:%s\n",);

    }


