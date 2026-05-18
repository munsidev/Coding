#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int items[100];
    int front;
    int rear;

}queue;
queue*createQueue()
{
    queue* q=(queue*)malloc(sizeof(queue));
    q->front=-1;
    q->rear=-1;
    return q;
}

int full(queue* q)
{
    return q->rear==100-1;
}
int empty(queue* q)
{
    return q->front==-1 || q->front>q->rear;
}

void enqueue(queue* q,int value)
{
    if(full(q))
    {
        printf("Queue is full!\n");
        return;
    }
    if(empty(q))
    {
        q->front=0;
    }
    q->rear++;
    q->items[q->rear]=value;
    printf("Enqueued: %d\n",value);
}
int dequeue(queue* q)
{
    if(empty(q))
    {
        printf("Queue is empty!\n");
        return -1;
    }
    int item=q->items[q->front];
    q->front++;
    if(q->front>q->rear)
    {
        q->front=q->rear=-1;

    }
    printf("Dequeue: %d\n",item);
    return item;
}
void del(queue*q,int pos,int value)
{
    if(empty(q)||pos<1||pos>(q->rear-q->front+1))
    {
        printf("Invalid position!\n");
        return;
    }
    
    int idx=q->front+pos-1;
    int i;
    for(i=idx;i<q->rear;i++)
    {
        q->items[i]=q->items[i+1];
        
    }
    if(q->items[i]!=value)
    {
        printf("invalid value!\n");
        return;
    }
    q->rear--;
    if(q->rear<q->front)
    {
        q->front=q->rear=-1;
    }
    printf("Deleted element at position %d\n",pos);
}
void display(queue* q)
{
    if(empty(q))
    {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue elements: ");
    for(int i=q->front;i<=q->rear;i++)
    {
        printf("%d ",q->items[i]);
    }
    printf("\n");
}

int main()
{
    queue*q=createQueue();
    int c,value,pos;
    while(1)
    {
        printf("\n1.Enqueue\n2.Dequeue\n3.Delete at position\n4.Display Queue\n5.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&c);

        switch(c)
        {
            case 1:
            printf("Enter value to Enqueue: ");
            scanf("%d",&value);
            enqueue(q,value);
            break;

            case 2:
            dequeue(q);
            break;

            case 3:
            int v;
            printf("Enter position to delete: ");
            scanf("%d",&pos);
            printf("Enter the value: ");
            scanf("%d",&v);
            del(q,pos,v);
            break;
            case 4:
            display(q);
            break;
            case 5:
            free(q);
            exit(0);
            default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}