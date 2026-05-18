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
        struct node* temp = start;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void deleteNode(int value) {
    struct node* temp = start;
    struct node* prev = NULL;

    // If the node to be deleted is the head node
    if(temp != NULL && temp->data == value) {
        start = temp->next;
        free(temp);
        return;
    }

   
    while(temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    // If the node was not found
    if(temp == NULL) return;

    // Unlink the node from the linked list
    prev->next = temp->next;
    free(temp);
}

int main() {   
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    
    printf("Original list:\n");
    output();
    
    deleteNode(20);
    
    printf("List after deleting node with data 20:\n");
    output();
    
    return 0;
}
