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
    int c;
    second(int x,int y,int z):first(x,y){
        c=z;
    }
    void showinfo(){
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main(){
    first obj(2,3);
    obj.show();
    second obj2(5,6,7);
    obj2.showinfo();
    obj.show();
    return 0;
}