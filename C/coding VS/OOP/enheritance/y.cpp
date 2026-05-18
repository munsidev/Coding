#include<iostream>
using namespace std;
class first{
    public:
    int a,b;
    first(int x,int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<a<<" "<<b<<endl;
    }
};
class second:public first{
    public:
    int a,b;
    second(int x,int y):first(x,y){
        a=x;
        b=y;
    }
    void showinfo(){
        cout<<a<<" "<<b<<" "<<endl;
    }
};
int main(){
    first obj(2,3);
    obj.show();
    second obj2(5,6);
    obj2.showinfo();
    obj2.show();
    return 0;
}