#include<iostream>
#include<string.h>
using namespace std;
class abc{
    public:
    char *str;
    abc(){
        str=new char[50];
    }
    void print(){
        cout<<str<<endl<<strlen(str)<<endl<<endl;
    }

};
int main(){
    abc a,b;
    strcpy(a.str,"hello");
    strcpy(b.str,"world");
    cout<<"before assigning"<<endl;
    a.print();b.print();
    return 0;
}