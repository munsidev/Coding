#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_len=1,sub_len=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            sub_len++;
        }
        else{
            if(sub_len>max_len){
                max_len=sub_len;
            }
            sub_len=1;
        }
    }
    if(sub_len>max_len){
                max_len=sub_len;
            }
    cout<<max_len<<endl;
    return 0;
}