#include<iostream>
using namespace std;
class abc{
    public:
    void area(int a,float b){
        cout<<.5*a*b<<endl;
    }
    void area(int a,int b){
        cout<<a*b<<endl;
    }
    void area(int a){
        cout<<3.1416*a*a;
    }
};
int main(){
    abc x;
    x.area(3,(float)4);
    x.area(3,4);
    x.area(3);
    return 0;
}