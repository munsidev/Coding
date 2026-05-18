#include <stdio.h>

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

void insertNode(struct node *start, int afterValue, struct node *newNode) {
    struct node *current = start;
    while (current != NULL && current->n != afterValue) {
        current = current->next;
    }
    if (current != NULL) {
        newNode->next = current->next;
        current->next = newNode;
    }
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

    struct node insert;
    insert.n = 5;
    insert.f = 0.0;
    insert.next = NULL;

    insertNode(start, 20, &insert);
    printf("\nAfter inserting node with value 5 after node with value 20:\n");
    printList(start);

    updateNode(start, 40, 50);
    printf("\nAfter updating node with value 40 to 50:\n");
    printList(start);

    return 0;
}
