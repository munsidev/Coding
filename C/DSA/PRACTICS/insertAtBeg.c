#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;

void output() {   
    int c = 0;                                                              
    struct node* temp = start; 
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

void insertAtBeginning(int value) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = start;
    start = newnode;
}

int main() {   
    insert(10);
    insert(20);
    insert(30);
    insert(40);
     output();

    insertAtBeginning(5);
   
    output();
    
    return 0;
}
