#include<stdio.h>
int main(){
    long long n,count1=0,count2=0;
    scanf("%lld",&n);
    int temp=n;
    while(temp!=0){
        int rem=temp%10;
        if(rem==4||rem==7){
            count2++;
        }
        temp/=10;
        count1++;
    }
    if(count1==count2){
        printf("YES\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}