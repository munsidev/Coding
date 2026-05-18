#include<stdio.h>
#include<stdlib.h>
struct node *creatLinkedList(int arr[] , int size);
void reverseLinkedList(struct node *head);

struct node {
    int data;
    struct node *next;
};

int main(){
  int arr[]  = {1,2,3,4,5,5,7,8};
  struct node *head;
head = creatLinkedList(arr,8);
struct node *newhead = head;
while(head !=NULL){
    printf("%d ->" , head ->data);
    head = head->next;
}
  printf("NULL\n") ;
  reverseLinkedList(newhead);
   return 0;
}

void reverseLinkedList(struct node *head){
    struct node *previous = NULL, *current = head, *next = NULL;
   
    while(current != NULL){
next = current ->next;
current ->next = previous;
previous = current;
current = next;
    }
    head = previous;
    while(head != NULL){
        printf("%d ->" , head ->data);
    head = head->next; 
    }
    printf("NULL\n");
}

struct node *creatLinkedList(int arr[] , int size){
    struct  node *head = NULL;
     struct  node *temp = NULL;
      struct  node *current = NULL;

      int i;
      for (i=0; i<size; i++){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->next = NULL;

        if(head == NULL){
            head = temp;
            current = temp;
        }else{
            current ->next = temp;
            current = current ->next;
        }
       
      }
      return head;
}
