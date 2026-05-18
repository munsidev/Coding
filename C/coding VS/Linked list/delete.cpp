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
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
void delete_head(node* &head){
    node* temp=head;
    head=head->next;
    free(temp);
}
void delete_tail(node* &head){
    node* last_second=head;
    while(last_second->next->next!=NULL){
        last_second=last_second->next;
    }
    node* temp=last_second->next;
    last_second->next=NULL;
    free(temp);
}
void delete_any(node* &head,int position){
    if(position==0){
        delete_head(head);
    }
    else{
        node* previous_node=head;
        int current_position=0;
        while(current_position!=position-1){
            previous_node=previous_node->next;
            current_position++;
        }
        node* temp=previous_node->next;
        previous_node->next=previous_node->next->next;
        delete temp;
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
    display(new_node);
    cout<<endl;
    delete_head(new_node);
    display(new_node);
    cout<<endl;
    delete_tail(new_node);
    display(new_node);
    cout<<endl;
    delete_any(new_node,3);
    display(new_node);
    cout<<endl;
    return 0;
}