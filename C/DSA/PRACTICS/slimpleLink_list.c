#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node*start=NULL;

void insert(int value)
{
   struct node*newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data = value;
   newnode->next = NULL;

   if(start==NULL)
   {
     start=newnode;
   }else{
    struct node*temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
   }
}
void output()
{
    struct node* temp=start;
    while(temp != NULL)
    {
     printf("%d -> ",temp->data);  
     temp=temp->next; 
    }
    printf("NULL\n");
}


int main()
{
  insert(10);
  insert(20);
  insert(30);
  insert(40);
  output();
}