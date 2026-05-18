#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node * next;
};
struct node* front=NULL;
struct node* rear=NULL;
int item=0;
void enqueue(int x)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=newnode;
        item++;
    }else{
        rear->next=newnode;
        rear=newnode;
        item++;

    }
}
void display()
{
    struct node* temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Empty!\n");
    }else{
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
void dequeue()
{
    struct node* temp=front;
    if(front==NULL && rear==NULL)
    {
        printf("Empty!\n");
    }else{
        if(item>0){
        printf("Dequeued: %d\n",temp->data);
        front=front->next;
        item--;
        free(temp);
        }else{
            front=NULL;
            rear=NULL;
            printf("Ends!!\n");
            free(temp);
        }
    }
}
void peek()
{
    if(front==NULL && rear==NULL)
    {
        printf("Empty!\n");
    }else{
        printf("Peek: %d\n",front->data);
    }
}
int main()
{
     int a;
    printf("\n1.Enqueue\n2.Dequeue\n3.peek\n4.display\n5.Exit\n");
    while(1){
    printf("Enter ur choice: ");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
    int x;
    printf("Enter value: ");
    scanf("%d",&x);
    enqueue(x);
    break;
    case 2:
    dequeue();
    break;
    case 3:
    peek();
    break;
    case 4:
    display();
    break;
    case 5:
    exit(0);
    break;
    
    default:
        printf("Invalid input!\n");
        break;
    }
    }
    
}