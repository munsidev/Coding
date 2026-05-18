#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1("hello");
    string str2="World";
    cout<<str1<<" "<<str2<<endl;
    string  str3;
    cin>>str3;
    cout<<str3<<endl;
    getchar();
    string str4;
    getline(cin,str4);
    cout<<str3<<endl;
    return 0;
}