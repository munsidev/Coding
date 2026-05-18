#include<iostream>
using namespace std;
int doub(int &x,int &k){
    for(int i=0;i<k;i++){
        x=x*2;
    }
    return x;
}
int main(){
    int a,b,c,k;
    cin>>a>>b>>c;
    cin>>k;
    if(a>b&&a>c){
        doub(a,k);
    }
    else if(b>a&&b>c){
        doub(b,k);
    }
    else{
        doub(c,k);
    }
    cout<<a+b+c<<endl;
    return 0;
}