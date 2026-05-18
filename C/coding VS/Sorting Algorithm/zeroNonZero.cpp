#include<iostream>
#include<vector>
using namespace std;
void zero(vector<int>&a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]==0&&a[j+1]!=0){
                swap(a[j],a[j+1]);
            }
        }
    }
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