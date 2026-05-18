#include<iostream>
#include<string.h>
using namespace std;
class abc{
    public:
    char *str;
    void print(){
        cout<<str<<endl<<strlen(str)<<endl<<endl;
    }
    abc(){
        str=new char[50];
    }
};
int main(){
    abc a,b;
    strcpy(a.str,"hello");
    strcpy(b.str,"world");
    cout<<"before assigning"<<endl;
    a.print();b.print();
    cout<<"after assigning"<<endl;
    a=b;
    strcpy(a.str,"this is the end");
    a.print();b.print();
    return 0;
}
