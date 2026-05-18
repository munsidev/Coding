#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

struct Queue {
    int items[MAX_SIZE];
    int front;
    int rear;
};

void initialize(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

int is_empty(struct Queue *queue) {
    return queue->front == -1;
}

int is_full(struct Queue *queue) {
    return (queue->rear + 1) % MAX_SIZE == queue->front;
}

void enqueue(struct Queue *queue, int item) {
    if (is_full(queue)) {
        printf("Queue Overflow\n");
        exit(1);
    } else if (is_empty(queue)) {
        queue->front = queue->rear = 0;
    } else {
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    }
    queue->items[queue->rear] = item;
}

int dequeue(struct Queue *queue) {
    if (is_empty(queue)) {
        printf("Queue Underflow\n");
        exit(1);
    }
    int item = queue->items[queue->front];
    if (queue->front == queue->rear) {
        queue->front = queue->rear = -1;
    } else {
        queue->front = (queue->front + 1) % MAX_SIZE;
    }
    return item;
}

void print_queue(struct Queue *queue) {
    if (is_empty(queue)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue: ");
    for (int i = queue->front; i != queue->rear; i = (i + 1) % MAX_SIZE) {
        printf("%d ", queue->items[i]);
    }
    printf("%d\n", queue->items[queue->rear]);
}

void update_middle(struct Queue *queue) {
    int size = (queue->rear + MAX_SIZE - queue->front) % MAX_SIZE + 1;
    int mid = size / 2;

    // Dequeue and enqueue elements until the middle
    for (int i = 0; i < mid - 1; i++) {
        enqueue(queue, dequeue(queue));
    }

    // Update the middle element
    dequeue(queue);
    enqueue(queue, 22);

    // Enqueue the remaining elements
    for (int i = mid; i < size; i++) {
        enqueue(queue, dequeue(queue));
    }
}

int main() {
    struct Queue queue;
    initialize(&queue);

    // Insert: 75, 34, 6, 7
    enqueue(&queue, 75);
    enqueue(&queue, 34);
    enqueue(&queue, 6);
    enqueue(&queue, 7);

    // Print
    print_queue(&queue);

    // Insert: 10
    enqueue(&queue, 10);

    // Update middle element
    update_middle(&queue);

    // Print
    print_queue(&queue);

    return 0;
}