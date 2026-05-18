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
void display(node* head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
void delete_alternative(node*&head,int a){
    if(a==2){
        node* every_second=head;
        while(every_second->next!=NULL){
            node* temp=every_second->next;
            every_second->next=every_second->next->next;
            delete temp;
            every_second = every_second->next;
        }
    }
}
int main(){
    node* new_node=new node(2);
    new_node->next=new node(3);
    new_node->next->next=new node(4);
    new_node->next->next->next=new node(5);
    new_node->next->next->next->next=new node(6);
    new_node->next->next->next->next->next=new node(7);
    new_node->next->next->next->next->next->next=new node(8);
    delete_alternative(new_node,2);
    display(new_node);
    return 0;
}