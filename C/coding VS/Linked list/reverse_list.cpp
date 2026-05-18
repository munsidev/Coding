#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;
    node(int a){
        value=a;
        next=NULL;
    }
};
void print(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
node* reverse(node *&head){
    node* previous=NULL;
    node* current=head;
    while(current!=NULL){
        node* nextptr=current->next;
        current->next=previous;
        previous=current;
        current=nextptr;
    }
    node *new_node=previous;
    return new_node;
}
int main(){
    node* head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    head->next->next->next->next=new node(5);
    node* new_head=reverse(head);
    print(new_head);

    return 0;
}