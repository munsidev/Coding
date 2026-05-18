#include<iostream>
#include<vector>
using namespace std;
void bubbleSort(vector<int>&x){
    int n=x.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-(i+1);j++){
            if(x[j]>x[j+1]){
                swap(x[j],x[j+1]);
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
    for(int i:x){
        cout<<i<<" ";
        }
        cout<<endl;
    bubbleSort(x);
    for(int i:x){
        cout<<i<<" ";
        }
    return 0;
}