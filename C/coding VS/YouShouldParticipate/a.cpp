#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x<=y){
            cout<<"0\n";
        }
        else{
            cout<<x-y<<endl;
        }
    }
return 0;
}