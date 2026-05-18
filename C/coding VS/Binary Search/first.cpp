#include<iostream>
#include<vector>
using namespace std;
int position(vector<int>&arr,int target){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
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
    int y=position(arr,target);
    cout<<y<<endl;
    return 0;
}