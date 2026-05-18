#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    float f;
    struct node* next;
};

struct node* create(float f, int data) {
    struct node* newnode = (struct node*) malloc(sizeof(struct node));
    newnode->data = data;
    newnode->f = f;
    newnode->next = NULL;
    return newnode;
}

void add(struct node** head, float f, int data) {
    struct node* newnode = create(f, data);
    if (*head == NULL) {
        *head = newnode;
        return;
    }
    struct node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
}

struct node* del(struct node* head, int pos) {
    struct node* temp = head;
    struct node* prev = NULL;

    if (temp == NULL) {
        printf("List is empty.\n");
        return head;
    }

    if (pos == 1) {
        head = temp->next;
        free(temp);
        return head;
    }

    for (int i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp != NULL) {
        prev->next = temp->next;
        free(temp);
    } else {
        printf("Invalid position.\n");
    }

    return head;
}

void display(struct node* head) {
    struct node* temp = head;
    while (temp != NULL) {
        printf("Float = %.2f, Int = %d\n", temp->f, temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    printf("Name: Jahid Ikbal\nID: 241-15-759\n");
    struct node* head = NULL;
    add(&head, 10.5, 15);
    add(&head, 12.25, 10);
    add(&head, 15.5, 9);
    display(head);

    head = del(head, 1);
    display(head);

    return 0;
}