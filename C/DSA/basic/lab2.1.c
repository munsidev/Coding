#include <stdio.h>

struct node
{
    int n;
    float f;
    struct node *next;
};

int main()
{
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
    struct node* current = start;
    while (current != NULL) 
    {
        printf("%d  %0.1f -> ", current->n, current->f);
        current = current->next;
    }
    printf("NULL\n\n");

   
    struct node* previous = NULL;
    current = start;

   
    if (start->n == 30) {
        start = start->next;
       
        current = start;
    } else {
        while (current != NULL && current->n != 30) {
            previous = current;
            current = current->next;
        }

       
        previous->next = current->next;

    }
    
    printf("After delete the node:30\n");
    current = start;
    while (current != NULL) 
    {
        printf("%d  %0.1f -> ", current->n, current->f);
        current = current->next;
    }
    printf("NULL\n\n");
    
    struct node insert;
    insert.n = 5;
    insert.f = 0.0;
    
    
    current = start;
    while (current != NULL && current->n != 20) {
        current = current->next;
    }

    if (current != NULL) {
    
        insert.next = current->next;
        current->next = &insert;
    }
     printf("After insert:\n");
    current = start;
    while (current != NULL) 
    {
        printf("%d  %0.1f -> ", current->n, current->f);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}
