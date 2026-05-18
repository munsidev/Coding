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
    int i=1;
    while(i<position-1 && temp->next!=NULL){
        temp = temp->next;
        i++;
    }

    if(temp != NULL) {
        newnode->next = temp->next;
        temp->next = newnode;
    } else {
        printf("Position out of range\n");
    }
}

void del() {
    struct node* temp = start;
    start = start->next;
    free(temp);
}

void deleteLastNode() {
   
    struct node* temp = start;
    while(temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

int main() {   
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    output();

    insertAtBeginning(5); 
    output();

    insertAtPosition(3, 15); 
    output();

    del(); 
    output(); 

    deleteLastNode(); 
    output();

    return 0;
}
