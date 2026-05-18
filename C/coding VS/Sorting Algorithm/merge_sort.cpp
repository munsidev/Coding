#include<iostream>
using namespace std;
void merge(int arr[],int l,int mid, int r){
    int an=mid-l+1;
    int bn=r-mid;
    //creat two temporary array
    int a[an];
    int b[bn];
    for(int i=0;i<an;i++){
        a[i]=arr[i+l];
    }
    for(int j=0;j<bn;j++){
        b[j]=arr[j+mid+1];
    }
    int i=0;//initial index of first sub array, a
    int j=0;//initial index of seconf sub array, b
    int k=l;//initial index of merged sub array
    while(i<an&&j<bn){
        if(a[i]<b[j]){
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
    }
    while(j<bn){
        arr[k++]=b[j++];
    }
}
void merge_sort(int arr[],int l,int r){
    //base_case
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    merge_sort(arr,l,mid);
    merge_sort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main(){
    int arr[]={23,6,567,45,34,456,123,567,234,32454,434,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}