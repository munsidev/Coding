#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node*lst1;
struct node*lst2;
struct node*lst3;
void insert1(int value)
{
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=value;
   newnode->next=NULL;
   if(lst1==NULL)
   {
    lst1=newnode;
   }
   else{
    struct node*temp=lst1;
    while(lst1->next!=NULL)
    {
      lst1=lst1->next;
    }
    lst1->next=newnode;
   }
}

void insert2(int value)
{
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=value;
   newnode->next=NULL;
   if(lst2==NULL)
   {
    lst2=newnode;
   }
   else{
    struct node*temp=lst2;
    while(lst2->next!=NULL)
    {
      lst2=lst2->next;
    }
    lst2->next=newnode;
   }
}

void joint()
{
    struct node*temp=lst1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=lst2;
    lst3=lst1;
}
void output()
{
    struct node*temp=lst3;
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;

    }
    printf("NULL\n");
}
int main()
{
   insert1(3);
   insert1(5);

   insert2(7);
   insert2(9);
   joint();

   output();
   return 0;
}