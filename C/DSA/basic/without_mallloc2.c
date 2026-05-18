#include<stdio.h>


struct node{                                                                                      
    int data;
    struct node *next;
};
struct node head = {12,NULL};
struct node one  = {20,NULL};
struct node two = {32,NULL};

int main(){
    head.next=&one;
    one.next=&two;
    printf("%d -> ",head.data);
    printf("%d -> ",one.data);
    printf("%d -> ",two.data);
    printf("NULL\n");
}