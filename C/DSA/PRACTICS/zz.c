#include<stdio.h>
#include<stdlib.h>
struct node{
    int value;
    struct node *next;
};
struct node *head=NULL;
void insert(int data)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->value=data;
    newnode->next=NULL;

    if(head==NULL)
    {
        head=newnode;
    }else{
        struct node*temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;

    }
}
void print()
{
    struct node*temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->value);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    print();
    return 0;
}