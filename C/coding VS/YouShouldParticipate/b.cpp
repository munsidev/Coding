#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int f=0;
    int l=0;
    int result=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(i==j){
                f+=arr[i][j];
            }
            if(i+j==2){
                l+=arr[i][j];
            }
        }
    }
    result=f-l;
    cout<<result<<endl;
    return 0;
}