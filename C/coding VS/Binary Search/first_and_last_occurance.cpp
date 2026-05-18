#include<iostream>
#include<vector>
using namespace std;
int first_position(vector<int>&arr,int x){
    int lo=0,hi=arr.size();
    int first=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            first=mid;
            hi=mid-1;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return first;
}
int last_position(vector<int>arr,int x){
    int lo=0,hi=arr.size();
    int  last=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            last=mid;
            lo=mid+1;
        }
        else if(arr[mid]<x){
            lo=mid+1;
        }
        else{
            hi=mid-1;
        }
    }
    return last;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr.push_back(y);
    }
    int x;
    cin>>x;
    int first=first_position(arr,x);
    vector<int>result;//result vector
    if(first==-1){
        result.push_back(-1);
        result.push_back(-1);
    }
    else{
        int last=last_position(arr,x);
        result.push_back(first);
        result.push_back(last);
    }
    for(int i=0;i<2;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}