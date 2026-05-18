#include<iostream>
#include<vector>
using namespace std;
int position(vector<int>&arr, int x){
    int lo=0,hi=arr.size()-1;
    int first=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            first=mid;
            hi=mid-1;
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return first;
}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr.push_back(y);
    }
    int first_position=position(arr,x);
    cout<<first_position<<endl;
    return 0;
}