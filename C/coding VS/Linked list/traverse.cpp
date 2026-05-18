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
void insert(node *&head,int value){
    node* new_node=new node(value);
    new_node->next=head;
    head=new_node;
}
void display(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    insert(head,2);
    insert(head,5);
    display(head);
    return 0;
}