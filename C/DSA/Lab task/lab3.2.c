#include <stdio.h>
#include <stdlib.h>

struct node {
    int n;
    float f;
    struct node *next;
};

void printList(struct node *start) {
    struct node *current = start;
    while (current != NULL) {
        printf("%d  %0.1f -> ", current->n, current->f);
        current = current->next;
    }
    printf("NULL\n");
}

struct node* deleteNode(struct node *start, int value) {
    struct node *current = start, *previous = NULL;

    if (start->n == value) {
        start = start->next;
    } else {
        while (current != NULL && current->n != value) {
            previous = current;
            current = current->next;
        }
        if (current != NULL) {
            previous->next = current->next;
        }
    }
    return start;
}

void updateNode(struct node *start, int oldValue, int newValue) {
    struct node *current = start;
    while (current != NULL) {
        if (current->n == oldValue) {
            current->n = newValue;
            break;
        }
        current = current->next;
    }
}

void insertNodeAtPosition(struct node **start, int position, int newValue) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->n = newValue;
    newNode->f = 0.0;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = *start;
        *start = newNode;
        return;
    }

    struct node *current = *start;
    int count = 1;

    while (current != NULL && count < position - 1) {
        current = current->next;
        count++;
    }

    if (current != NULL) {
        newNode->next = current->next;
        current->next = newNode;
    }
}

int main() {
    struct node a[4], *start;
    start = &a[0];
    a[0].n = 10;
    a[0].f = 2.5;
    a[0].next = &a[1];

    a[1].n = 20;
    a[1].f = 3.5;
    a[1].next = &a[2];

    a[2].n = 30;
    a[2].f = 2;
    a[2].next = &a[3];

    a[3].n = 40;
    a[3].f = 4;
    a[3].next = NULL;

    printf("Original list:\n");
    printList(start);

    start = deleteNode(start, 30);
    printf("\nAfter deleting node with value 30:\n");
    printList(start);

    updateNode(start, 40, 50);
    printf("\nAfter updating node with value 40 to 50:\n");
    printList(start);

    int position, newValue = 70;
    printf("Enter the position to insert the new node: ");
    scanf("%d", &position);

    insertNodeAtPosition(&start, position, newValue);
    printf("\nAfter inserting node with value 70 at position %d:\n", position);
    printList(start);

    return 0;
}
