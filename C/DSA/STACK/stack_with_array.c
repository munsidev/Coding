#include<stdio.h>
int stack[5];
int top=-1;
void push()
{
    int x;
    printf("Enter data: ");
    scanf("%d",&x);
    if(top==5-1)
    {
        printf("Overflow\n");
    }else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow");
    }else{
        item=stack[top];
        top--;
        printf("%d\n",item);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("No data available!\n");
    }else{
        printf("%d",stack[top]);
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}

int main(){
    int a;
   do{
  printf("\n1.Push\n2.pop\n3.peek\n4.display\n5.exit\n");
  printf("Enter ur choice:");
  scanf("%d",&a);
  switch(a){
    case 1:
      push();
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

}