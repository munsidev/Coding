#include<stdio.h>
#include<stdlib.h>

struct node {
    float f;
    int n;
    struct node* next;
};

struct node* start = NULL;

void output() {   
    struct node* temp = start;
    while(temp != NULL) {
        printf("%.02f  %d -> ", temp->f, temp->n);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insert(float F, int N) {   
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->f = F;
    newnode->n = N;
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

void update(int old_n, float new_f, int new_n) {
    struct node* temp = start;
    while(temp != NULL) {
        if(temp->n == old_n) {
            temp->f = new_f;
            temp->n = new_n;
            return;
        }
        temp = temp->next;
    }
    printf("Value %d not found in the list.\n", old_n);
}

int main() {
    printf("Name : Khalid Hasan\nID : 241-15-730\n");
    insert(10.5, 15);
    insert(12.25, 10);
    insert(15.5, 9);
    printf("Linked list: ");
    output();
    printf("After update:\n");
    update(10, 11.5, 12);
    output();
    return 0;
}
