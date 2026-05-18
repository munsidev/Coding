#include<iostream>
#include<vector>
using namespace std;
int minimum_element(vector<int>&arr){
    int lo=0,hi=arr.size()-1;
    if(arr[lo]<arr[hi]){
        return lo;
    }
    else{
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]>arr[mid+1]){
                return mid+1;
            }
            if(arr[mid]<arr[mid-1]){
                return mid;
            }
            if(arr[mid]>arr[lo]){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int y;
        cin>>y;
        arr.push_back(y);
    }
    int position=minimum_element(arr);
    cout<<position<<endl;
    return 0;
}