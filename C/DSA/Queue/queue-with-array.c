#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Overflow!\n");
    }else if(front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }else{
        rear++;
        queue[rear]=x;
    }
}
void dequeue()
{
    if(front==-1 && rear==-1)
    {
        printf("Underflow!\n");
    }else if(front==rear)
    {
         printf("Dequeued: %d\n",queue[front]);
        front=rear=-1;
    }else{
        printf("Dequeued: %d\n",queue[front]);
        front=(front+1) % N;
    }
}
void display()
{
    if(front==-1 && rear==-1)
    {
        printf("Empty!\n");
    }else{
        for(int i=front;i<rear+1;i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
void peek()
{
    if(front==-1 && rear==-1)
    {
        printf("Empty!\n");
    }else{
        printf("%d\n",queue[front]);
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