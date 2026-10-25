#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int id;
    int marks;
    struct Node *prev;
    struct Node *next;
} Node;

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1) {
        int id, marks;
        printf("Enter ID (0 to finish entering records): ");
        if (scanf("%d", &id) != 1) {
            while (head != NULL) {
                Node *next = head->next;
                free(head);
                head = next;
            }
            return 1;
        }
        if (id == 0) {
            break;
        }

        do {
            printf("Enter Marks: ");
            if (scanf("%d", &marks) != 1) {
                while (head != NULL) {
                    Node *next = head->next;
                    free(head);
                    head = next;
                }
                return 1;
            }
            if (marks < 0 || marks > 100) {
                printf("Invalid marks. Please try again!\n");
            }
        } while (marks < 0 || marks > 100);

        Node *node = malloc(sizeof(*node));
        if (node == NULL) {
            while (head != NULL) {
                Node *next = head->next;
                free(head);
                head = next;
            }
            return 1;
        }
        node->id = id;
        node->marks = marks;
        node->prev = tail;
        node->next = NULL;

        if (tail != NULL) {
            tail->next = node;
        } else {
            head = node;
        }
        tail = node;
    }

    while (1) {
        printf("Enter id to search (For exit click Zero!) : ");
        int id;
        if (scanf("%d", &id) != 1 || id == 0) {
            break;
        }

        Node *current = head;
        while (current != NULL && current->id != id) {
            current = current->next;
        }
        if (current != NULL) {
            printf("The result is %d\n", current->marks);
        } else {
            printf("ID not found.\n");
        }
    }

    while (head != NULL) {
        Node *next = head->next;
        free(head);
        head = next;
    }
    return 0;
}