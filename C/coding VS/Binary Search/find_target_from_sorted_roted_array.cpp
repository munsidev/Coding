#include<iostream>
#include<vector>
using namespace std;
int right_search(vector<int>&arr,int min,int x){
    int lo=min,hi=arr.size()-1;
        /*what if i declare a ans=-1 variable */
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            return mid;
        /*store 'mid' in 'ans' variable, instead of 'return mid;'*/
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return -1;
    /*return ans;' variable instead of "return -1;"")*/
}
int left_search(vector<int>&arr,int min,int x){
    int lo=0,hi=min-1;
    /*what if I initialised "int ans=-1;" then store the 'mid' value 
    in the'ans' variable then a last return the 'ans' variable*/
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return -1;
}
int min(vector<int>&arr){
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
            if(arr[mid]<arr[lo]){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
    }
    return -1;
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
    int minimum=min(arr);
    if(minimum==0){
        int right=right_search(arr,minimum,x);
        if(right!=-1){
            cout<<"Element present in position "<<right<<endl;
        }
        else{
            cout<<"Element is not present"<<endl;
        }
        return 0;
    }
    int left=left_search(arr,minimum,x);
    if(left==-1){
        int right=right_search(arr,minimum,x);
        if(right!=-1){
            cout<<"Element present in position "<<right<<endl;
        }
        else{
            cout<<"Element is not present"<<endl;
        }
        return 0;
    }
    cout<<"Element present in position "<<left<<endl;
    return 0;
}