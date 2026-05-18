#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"parent class"<<endl;
    }
};
class child1: public parent{
    public:
    child1(){
        cout<<"child1 class"<<endl;
    }
};
class child2: public parent{
    public:
    child2(){
        cout<<"child2 class"<<endl;
    }
};
class grand_child: public child1,public child2{
    public:
    grand_child(){
        cout<<"gramd child class"<<endl;
    }
};
int main(){
    grand_child a;
    return 0;
}