#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int count=0;
        if(x%y==0){
            count=x/y;
        }
        else{
            count=x/y;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}