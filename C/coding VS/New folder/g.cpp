#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        int arr[x]={0};
        int min=arr[0];
        int max=arr[0];
        for(int i=0;i<x;i++){
            cin>>arr[i];
            if(arr[i]<min){
                min=arr[i];
            }
            if(arr[i]>max){
                max=arr[i];
            }
        }
        cout<<
    }
    return 0;
}