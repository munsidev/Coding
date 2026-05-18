#include<iostream>
#include<vector>
using namespace std;
int peak(vector<int>&arr){
    int lo=0,hi=arr.size()-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>arr[mid-1]){
            ans=mid;
            lo=mid+1;
        }
        else{
            hi=mid-1;//what if there is no increasing curv{9,8,7,6,5,4,3}
        }
    }
    return ans;
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
    int result=peak(arr);
    cout<<"result="<<result<<endl;
    return 0;
}