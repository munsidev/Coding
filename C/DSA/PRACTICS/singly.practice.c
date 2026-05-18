#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;

};
struct node*start;
void output()
{
    struct node*temp=start;
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
    
}

void input(int value)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(start==NULL)
    {
        start=newnode;
    }
   

    else{

    
   
         struct node*temp=start;
         while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    }
  
    
}

int main()

 {
   input(10);
   input(20);
   input(30);

   output();
 }
