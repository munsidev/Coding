#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void count(struct node*start)
{
    int c=0;
    if(start->next==NULL)
    {
        return;
      }
     
    while(start!=NULL)
    {
        c++;
        start= start->next;
    }
    printf("%d\n",c);
}
void output(struct node*start)
{
     if(start==NULL)
     {
        printf("LINK LIST EMPTY\n ");
     }
     while(start!=NULL)
     {
        printf("%d -> ",start->data);
        start=start->next;
     }
     printf("NULL\n");
      
}

int main()
{
    struct node* start;
    start = NULL;
    start = (struct node*)malloc(sizeof(struct node));
    start->data=10;
    start->next = NULL;
    
    struct node* current;
    current = NULL;
    current = (struct node*)malloc(sizeof(struct node));
    current->data = 20;
    current->next = NULL;
    start->next = current;

    current = (struct node*)malloc(sizeof(struct node));
    current->data = 30;
    current->next = NULL;
    start->next->next = current;

    count(start);
    output(start);
   
   
}