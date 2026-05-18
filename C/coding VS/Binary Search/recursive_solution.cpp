#include<iostream>
#include<vector>
using namespace std;
int position(vector<int>&arr,int target,int low,int high){
    int mid=(low+high)/2;
    if(arr[mid]==target){
        return mid;
    }
    else{
        if(target>arr[mid]){
            position(arr,target,mid+1,high);
        }
        else{
            position(arr,target,low,mid-1);
        }
    }
    return -1;
}
int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int target;
    cin>>target;
    int low=0;
    int high=arr.size()-1;
    int y=position(arr,target,low,high);
    cout<<y<<endl;
    return 0;
}