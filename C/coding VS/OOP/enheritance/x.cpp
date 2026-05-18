#include <iostream>
#include<cstring>
using namespace std;
class student{
public:
char* name;
float id;
student( const char* nami, float ids){
    name=new char[strlen(nami)+1];
strcpy(name, nami);
id=ids;
}
void showinfo(){
cout<<name<<id<<endl<<endl;
}
~student(){
    delete[] name;
}
};
class registration:public student {
public:
int reg;
registration (const char* nam,float ids,int regi):student(nam,ids){
reg=regi;
}
void show(){
    cout<<name<<id<<reg;
}
};
int main(){
student a("redwan",241.15);
registration b("redwan", 241.15,24115171);
a.showinfo();
b.show();
return 0;
}