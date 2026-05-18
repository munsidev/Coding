#include<iostream>
#include<vector>
using namespace std;
int count_sort(vector<int>&arr){
    int len=arr.size();
    int max= -100000;
    //find the maximum element
    for(int i=0;i<len;i++){
        if(arr[i]>max)
        max=arr[i];
    }
    //creat a frequency array
    vector<int>frequency(max+1,0);
    //store the frequency
    for(int i=0;i<len;i++){
        frequency[arr[i]]++;
    }
    //modify the 'Frequency Arry' to 'Comulative Frequency Arra'
    for(int i=1;i<=max;i++){
        frequency[i]+=frequency[i-1];
    }
    // calculate the Sorted Array
    vector<int>sorted(len);
    for(int i=len-1;i>=0;i--){
        sorted[--frequency[arr[i]]]=arr[i];
    }
    //copy the sorted array in main array
    for(int i=0;i<len;i++){
        arr[i]=sorted[i];
    }
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
    count_sort(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}