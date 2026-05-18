#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node *prev;
};
struct node *head;
void input(int value)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head == NULL)
    {
        head=newnode;
    }
    else
    {
        struct node*temp=head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->prev = temp;
    }
}
void output()
{
    struct node* temp=head;
    printf("NULL <-> ");
    while(temp != NULL)
    {
        printf("%d <-> ",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    input(7);
    input(9);
    input(11);
    output();
    return 0;
}