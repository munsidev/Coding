#include<iostream>
#include<vector>
using namespace std;
void selectionSort(vector<int>&a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        int minimum_values_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minimum_values_index]){
                minimum_values_index=j;
            }
        }
        if(i!=minimum_values_index){
                swap(a[i],a[minimum_values_index]);
            }
    }
    return;
}
int main(){
    vector<int>x;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        x.push_back(y);
    }
    for(int i:x){
        cout<<i<<" ";
    }
    cout<<endl;
    selectionSort(x);
    for(int i:x){
        cout<<i<<" ";
    }
    return 0;
}