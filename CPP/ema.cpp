#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return 1;
        }

    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;  
    cin>>target;

    int result = linearSearch(arr,n,target);
    if(result ==1)
           cout<<"fount the number at index :"<<result<<endl;
    else
       cout<<"not found"<<endl;
}