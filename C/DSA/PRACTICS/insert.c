#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
 struct node* start=NULL;
 

void output()
{   
    int c=0;                                                              
     while(start!=NULL)
     {
        printf("%d -> ",start->data);
        c++;
        start=start->next;
     }
     printf("NULL\n");
     printf(" no of node=%d\n",c);
      
}
 void insert(int value)
{   
    
    struct node*newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    
    if(start==NULL)
    {
        start=newnode;
    }
    else{
    struct node*insert=start;
    while(insert->next!=NULL)
    {
       insert=insert->next;
       
    }
    insert->next=newnode;
    
    }
    
     
}                                                                                                                                                                              

int main()
{   

    insert(10);
     insert(20);
      insert(30);
       insert(40);
    
   
    output();
    
   
}

