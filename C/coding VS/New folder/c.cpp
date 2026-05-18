#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x%4==0){
            cout<<"North"<<endl;
        }
        else if(x%4==3){
            cout<<"West"<<endl;
        }
        else if(x%4==2){
            cout<<"South"<<endl;
        }
        else if(x%4==1){
            cout<<"East"<<endl;
        }
    }
    return 0;
}