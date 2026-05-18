 #include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* top=NULL;
void push(int x)
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void display()
{
    struct node* temp=top;
    if(top==NULL)
    {
        printf("Empty!\n");
    }else{
    while(temp!=NULL)
    {
        printf("%d <- ",temp->data);
        temp=temp->link;
    }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("Empty!");
    }else{
        printf("Top Element is: %d\n",top->data);
    }
}
void pop()
{
    struct node* temp=top;
    if(temp==NULL)
    {
        printf("Underflow!\n");
    }else{
        printf("Poped : %d\n",temp->data);
        top=top->link;
        free(temp);
    }
}
int main()
{
    int a;
   do{
  printf("\n1.Push\n2.pop\n3.peek\n4.display\n5.exit\n");
  printf("Enter ur choice:");
  scanf("%d",&a);
  switch(a){
    case 1:
    int x;
    printf("Enter value:");
    scanf("%d",&x);
      push(x);
      break;
      case 2:
      pop();
      break;
      case 3:
      peek();
      break;
      case 4:
      display();
      break;
      case 5:
      break;
      default:
      printf("Wrong input!");
      break;
  }
    }while(a!=5);
    return 0;
}