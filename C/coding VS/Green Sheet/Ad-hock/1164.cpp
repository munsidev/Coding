#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int sum=0;
        for(int i=1;i<=x/2;i++){
            if(x%i==0){
                sum+=i;
            }
        }
        if(sum==x){
            cout<<x<<" eh perfeito"<<endl;
        }
        else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }
    return 0;
}