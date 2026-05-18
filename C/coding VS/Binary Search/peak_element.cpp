#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int>&arr){
    int n=arr.size();
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid==0){
            if(arr[mid]>arr[mid+1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid==n-1){
            if(arr[mid]>arr[mid-1]){
                return n-1;
            }
            else{
                return n-2;
            }
        }
        else{
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){
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
    int n;
    cin>>n;
    vector<int>arr;
    while(n--){
        int y;
        cin>>y;
        arr.push_back(y);
    }
    int result=peak(arr);
    cout<<result<<endl;
    return 0;
}