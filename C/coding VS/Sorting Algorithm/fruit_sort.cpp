#include<iostream>
#include<string.h>
using namespace std;
void fruit_sort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_index],fruit[j])>0){
                min_index=j;
            }
        }
        if(i!=min_index){
            swap(fruit[i],fruit[min_index]);

        }
    }
}
int main(){
    char fruit[][60]={"papaya","apple","kiwi","lime","mango"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    fruit_sort(fruit,n);
    for(char *i:fruit){
        cout<<i<<" ";
    }
    return 0;
}