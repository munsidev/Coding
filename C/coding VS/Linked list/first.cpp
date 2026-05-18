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
int main(){
    node* x=new node(15);
    cout<<x->value<<endl<<x->next;
    delete x;
    return 0;
}