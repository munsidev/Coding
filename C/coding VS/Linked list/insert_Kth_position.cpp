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
void insert(node *&head,int position,int value){
    node *new_node=new node(value);
    node *temp=head;
    int current_position=0;
    while(current_position!=(position-1)){
        temp=temp->next;
        current_position++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void display(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int main(){
    node *head=new node(3);
    head->next=new node(4);
    head->next->next=new node(5);
    insert(head,2,100);
    display(head);
    return 0;
}