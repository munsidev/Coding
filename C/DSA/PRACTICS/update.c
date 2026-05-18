#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;

void output() {   
    int c = 0;                                                              
    struct node* temp = start; // Use a temporary pointer to traverse
    while(temp != NULL) {
        printf("%d -> ", temp->data);
        c++;
        temp = temp->next;
    }
    printf("NULL\n");
    printf("Number of nodes = %d\n", c);
}

void insert(int value) {   
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;
    
    if(start == NULL) {
        start = newnode;
    } else {
        struct node* insert = start;
        while(insert->next != NULL) {
            insert = insert->next;
        }
        insert->next = newnode;
    }
}

void update(int old_value, int new_value) {
    struct node* temp = start;
    while(temp != NULL) {
        if(temp->data == old_value) {
            temp->data = new_value;
            return;
        }
        temp = temp->next;
    }
    printf("Value %d not found in the list.\n", old_value);
}
void deleteNode(int value) {
    struct node* temp = start;
    struct node* prev = NULL;
   while(temp != NULL){
    printf("Value %d not found in the list.\n", value);
    break;
   }
    if(temp != NULL && temp->data == value) {
        start = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

  
    if(temp == NULL) return;
    
    prev->next = temp->next;
    free(temp);
   }
   void insertAtPosition(int position, int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = NULL;

    if(position == 1) {
        newnode->next = start;
        start = newnode;
        return;
    }

    struct node* temp = start;
    for(int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if(temp != NULL) {
        newnode->next = temp->next;
        temp->next = newnode;
    } else {
        printf("Position out of range\n");
    }
}
   


int main() {  

    int a[100];
    int b;
    printf("Enter the number of node :");
    scanf("%d",&b);
    for(int i=0;i<b;i++)
    {
        printf("Enter the data of node %d : ",i+1);
        scanf("%d",&a[i]);
    }

      for(int i=0;i<b;i++)
      {
         insert(a[i]);
      }
      printf("Original list:\n");
      output();
      while(1){
      int c;
      printf("\n\n");
      printf("For update press 1\n");
      printf("For delete press 2\n");
      printf("For insert press 3\n");
      printf("For exit press 0\n");
      printf(">");
      scanf("%d",&c);
      if(c==1)
      {
         int x,y;
    printf("Enter the value you want to update :");
    scanf("%d",&x);
     printf("Enter the updated value :");
     scanf("%d",&y);
    update(x,y);
    
    printf("Updated list:\n");
    output();
      }
    else if(c==2)
    {  
        int d;
       printf("Enter the value you want to delete :");
       scanf("%d",&d);
       deleteNode(d);
       printf("Updated list:\n");
       output();
    }
    else if(c==3)
    {   
        int m,n;
        printf("Enter the position : ");
        scanf("%d",&m);
         printf("Enter the value : ");
        scanf("%d",&n);


        insertAtPosition(m, n); 
        printf("Updated list:\n");
    output();
    }
    else if(c<0 || c>3)
    {
        printf("Wrong input try Again!\n");
    
    }
    else{
        break;
    }
}
       
    return 0;
}
