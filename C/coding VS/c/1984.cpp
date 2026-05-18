/*#include<stdio.h>
int main(){
    long long n,rem,sum=0;
    scanf("%lld",&n);
    while(n!=0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    printf("%d\n",sum);
    return 0;
}*/
#include<stdio.h>
#include<string.h>
int main(){
    char num[11];
    char reverseNum[11];
    scanf("%s",num);
    int len=strlen(num);
    for(int i=0; i<len;i++){
        reverseNum[i]=num[len-i-1];
    }
    reverseNum[len]='\0';
    printf("%s\n",reverseNum);
    return 0;
}
