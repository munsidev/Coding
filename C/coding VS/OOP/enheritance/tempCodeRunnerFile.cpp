#include <iostream>
#include<cstring>
using namespace std;
class student{
public:
char* name;
float id;
student(char* nami, float ids){
    name=new char[strlen(nami)+1];
strcpy(name, nami);
id=ids;
}
void showinfo(){
cout<<name<<id<<endl<<endl;
}
};
class registration:public student {
public:
int reg;
registration (char* nam,float ids,int regi):student(nam,ids){
reg=regi;
}
};
int main(){
student a("redwan",241.15);
a.showinfo();
return 0;
}