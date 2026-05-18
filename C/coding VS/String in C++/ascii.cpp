#include<iostream>
using namespace std;
int main(){
    int a=5;
    int &b=a;
    cout<<a;
    a=6;
    cout<<a;
    return 0;
}