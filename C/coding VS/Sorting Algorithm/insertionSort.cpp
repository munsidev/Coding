#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int>&a){
    int n=a.size();
    for(int i=1;i<n;i++){
        int current_position=a[i];
        int j=i-1;
        while(j>=0&&a[j]>current_position){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current_position;
    }
    return;
}
int main(){
    vector<int>x;
    for(int i=0;i<5;i++){
        int a;
        cin>>a;
        x.push_back(a);
    }
    insertionSort(x);
    for(int i:x){
        cout<<i<<" ";
    }
    return 0;
}