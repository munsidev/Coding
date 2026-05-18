#include<iostream>
#include<vector>
using namespace std;
void insertion_sort(vector<int>&a){
    int n=a.size();
    for(int i=1;i<n;i++){
        int current_position=a[i];
        int j=i-1;
        while(j>=0&&a[j]>current_position){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current_position;
    }
    return;
}
int main(){
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;;
        cin>>x;
        a.push_back(x);
    }
    insertion_sort(a);
    for(int i:a){
        cout<<i<<" ";
    }
    return 0;
}