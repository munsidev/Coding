#include<iostream>
using namespace std;
class x{
    public:
    int value;
    int* next;
    x(int a){
        value=a;
        next=NULL;
    }
};
void display(x *head){
    x* new_node=head;
    while(new_node!=NULL){
        cout<<new_node->value<<" ";
        new_node=new_node->next;
    }
}
int main(){
    x *head=new x(4);
    head->next=new x(5);
    return 0;
}