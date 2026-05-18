#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char description[100];
    int is_completed;
} Task;

typedef struct Node {
    Task task;
    struct Node* next;
} Node;

Node* head = NULL;

void add_task() {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter task description: ");
    scanf("%s",&new_node->task);
    new_node->task.is_completed = 0;
    new_node->next = head;
    head = new_node;
    printf("Task added.\n");
}

void list_tasks() {
    printf("To-do List:\n");
    Node* current = head;
    int index = 1;
    while (current != NULL) {
        printf("%d. %s", index, current->task.description);
        if (current->task.is_completed) {
            printf(" (Completed)\n");
        } else {
            printf("\n");
        }
        current = current->next;
        index++;
    }
}

void mark_task_completed(int task_index) {
    Node* current = head;
    int index = 1;
    while (current != NULL && index < task_index) {
        current = current->next;
        index++;
    }

    if (current != NULL) {
        current->task.is_completed = 1;
        printf("Task marked as completed.\n");
    } else {
        printf("Invalid task index.\n");
    }
}

void remove_task(int task_index) {
    Node* current = head;
    Node* prev = NULL;
    int index = 1;
    while (current != NULL && index < task_index) {
        prev = current;
        current = current->next;
        index++;
    }

    if (current != NULL) {
        if (prev == NULL) {
            head = current->next;
        } else {
            prev->next = current->next;
        }
        free(current);
        printf("Task removed.\n");
    } else {
        printf("Invalid task index.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nTo-do List Menu:\n");
        printf("1. Add task\n");
        printf("2. List tasks\n");
        printf("3. Mark task as completed\n");
        printf("4. Remove task\n");
        printf("5. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_task();
                break;
            case 2:
                list_tasks();
                break;
            case 3:
                printf("Enter the task index to mark as completed: ");
                int completed_index;
                scanf("%d", &completed_index);
                mark_task_completed(completed_index);
                break;
            case 4:
                printf("Enter the task index to remove: ");
                int remove_index;
                scanf("%d", &remove_index);
                remove_task(remove_index);
                break;
            case 5:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice.\n");
        }
    }

    return 0;
}