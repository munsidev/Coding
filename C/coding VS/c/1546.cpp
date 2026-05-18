#include<stdio.h>
int main(){
    int N,K,feedback;
    const char*teamMembers[4]={"Rolien","Naej","Elehcim","Odranoel"};
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&K);
        for(int j=0;j<K;j++){
            scanf("%d",&feedback);
            printf("%s\n",teamMembers[feedback-1]);
            }
        }
    return 0;
}