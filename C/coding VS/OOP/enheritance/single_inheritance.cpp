#include<iostream>
using namespace std;
class Parent{
    public:
    Parent(){
        cout<<"parent class"<<endl;
    }
};
class Child: public Parent{
    public:
    Child(){
        cout<<"child class"<<endl;
    }
};
int main(){
    Child a();
    cout<<a;
    return 0;
}