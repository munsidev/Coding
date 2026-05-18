#include<iostream>
#include<vector>
using namespace std;
void zero(vector<int>&a){
    int n=a.size();
    for(int i=n-1;i>=0;i--){
        int j=0;
        bool count=false;
        while(j!=i){
            if(a[j]==0&&a[j+1]!=0){
                swap(a[j],a[j+1]);
                count=true;
            }
            j++;
        }
        if(!count){
            break;
        }
    }
    return;
}
int main(){
    vector<int>x;
    for(int i=0;i<5;i++){
        int y;
        cin>>y;
        x.push_back(y);
    }
    zero(x);
    for(int i:x){
        cout<<i<<" ";
    }
}