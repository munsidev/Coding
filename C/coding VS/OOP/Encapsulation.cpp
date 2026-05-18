#include<iostream>
using namespace std;
class abc{
    int x;
    public:
    void set(int a){
        x=a;
    }
    int get(){
        return x;
    }
};
int main(){
    abc obj;
    int x;
    cin>>x;
    obj.set(x);
    cout<<obj.get();
    return 0;
}