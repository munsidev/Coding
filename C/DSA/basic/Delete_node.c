#include<stdio.h>

struct node
{
   int n;
   float f;
   struct node *next;
};
int main()
{
   struct node a[4],*start;
   start = &a[0];
   a[0].n = 4;
   a[0].f = 2.5;
   a[0].next = &a[1];

   a[1].n = 10;
   a[1].f = 3.5;
   a[1].next = &a[2];

   a[2].n = 15;
   a[2].f = 4.0;
   a[2].next = NULL;

   a[3].n = 12;
   a[3].f = 2.5;
   a[3].next = &a[2];
   a[1].next = &a[3];

   struct node* current = &a[0];
    while (current != NULL) 
    {
        printf("%d  %0.2f -> ", current->n,current->f);
        current = current->next;
    }
    printf("NULL\n");
   
   return 0;
   
}