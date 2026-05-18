#include <stdio.h>
#include <stdlib.h>

// Singly Linked List structure
struct Node {
    int data;
    struct Node* next;
};

// Global head pointer
struct Node* head = NULL;

// Function to insert a node at the end of the list
void insert(int value) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // Check if the list is empty
    if (head == NULL) {
        head = newNode;
    } else {
        // Traverse to the end of the list
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        // Link the new node to the last node
        current->next = newNode;
    }
}

// Function to traverse and print the list
void traverse() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

void delete(int value) {
    if (head == NULL) {
        printf("List is empty.");
        return;
    }

    struct Node* current = head;
    struct Node* previous = NULL;

    while (current != NULL) {
        if (current->data == value) {
            if (previous == NULL) {
                head = current->next;
            } else {
                previous->next = current->next;
            }
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }

    printf("Element not found in the list.");
}

struct Node* search(int value) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == value) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void update(int oldValue, int newValue) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == oldValue) {
            current->data = newValue;
            return;
        }
        current = current->next;
    }
    printf("Element not found in the list.");
}

int main() {
    // Insert elements into the list
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    // Traverse and print the list
    printf("List: ");
    traverse();

    // Update the node with value 30 to 60
    update(30, 60);

    // Traverse and print the list again
    printf("Updated List: ");
    traverse();

    return 0;
}
