#include<iostream>
#include<vector>
using namespace std;
void selection_sort(vector<int>&a){
    int n=a.size();
    for(int i=0;i<n;i++){
        int minimum_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minimum_index]){
                minimum_index=j;
            }
        }
        if(i!=minimum_index){
            swap(a[i],a[minimum_index]);
        }
    }
    return ;
}
int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    selection_sort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}