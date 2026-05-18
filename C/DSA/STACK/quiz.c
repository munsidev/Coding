#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int seatNumber;
    float price;
} Ticket;

typedef struct Node {
    Ticket ticket;
    struct Node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} TicketQueue;

typedef struct {
    Ticket tickets[100]; // Adjust size as needed
    int top;
} TicketStack;

void enqueue(TicketQueue* queue, Ticket ticket) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->ticket = ticket;
    newNode->next = NULL;

    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
    } else {
        queue->rear->next = newNode;
        queue->rear = newNode;
    }
}

Ticket dequeue(TicketQueue* queue) {
    if (queue->front == NULL) {
        printf("Queue is empty.\n");
        Ticket emptyTicket;
        memset(&emptyTicket, 0, sizeof(emptyTicket));
        return emptyTicket;
    }

    Node* temp = queue->front;
    Ticket ticket = temp->ticket;
    queue->front = temp->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return ticket;
}

int isEmptyQueue(TicketQueue* queue) {
    return queue->front == NULL;
}

void push(TicketStack* stack, Ticket ticket) {
    if (stack->top == 99) {
        printf("Stack is full.\n");
        return;
    }
    stack->tickets[++stack->top] = ticket;
}

Ticket pop(TicketStack* stack) {
    if (stack->top == -1) {
        printf("Stack is empty.\n");
        Ticket emptyTicket;
        memset(&emptyTicket, 0, sizeof(emptyTicket));
        return emptyTicket;
    }
    return stack->tickets[stack->top--];
}

int isEmptyStack(TicketStack* stack) {
    return stack->top == -1;
}

int main() {
    TicketQueue queue;
    queue.front = queue.rear = NULL;

    TicketStack stack;
    stack.top = -1;

    // Simulate ticket sales
    Ticket ticket1 = {"Alice", 1, 50.0};
    Ticket ticket2 = {"Bob", 2, 60.0};
    Ticket ticket3 = {"Charlie", 3, 70.0};

    enqueue(&queue, ticket1);
    enqueue(&queue, ticket2);
    enqueue(&queue, ticket3);

    while (!isEmptyQueue(&queue)) {
        Ticket soldTicket = dequeue(&queue);
        push(&stack, soldTicket);
        printf("Ticket sold to %s (Seat %d, Price %.2f)\n", soldTicket.name, soldTicket.seatNumber, soldTicket.price);
    }

    printf("\nTicket sale history:\n");
    while (!isEmptyStack(&stack)) {
        Ticket ticket = pop(&stack);
        printf("- %s (Seat %d, Price %.2f)\n", ticket.name, ticket.seatNumber, ticket.price);
    }

    return 0;
}