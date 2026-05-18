#include<iostream>
#include<vector>
using namespace std;
void end_0(vector<int>&a){
    int n=a.size();
    for(int i=n-1;i>=0;i--){
        bool flag=false;
        int j=0;
        while(j!=i){
            if(a[j]==0&&a[j+1]!=0){
            swap(a[j],a[j+1]);
            flag=true;
            }
            j++;
        }
        if(!flag){
            break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    end_0(a);
    for(int i:a){
        cout<<i<<" ";
    }
    return 0;
}