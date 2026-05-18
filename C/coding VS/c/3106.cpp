#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    int total_student_can_participate=0;

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
        if(array[i]%3!=0){
            int x=array[i]/3;
            array[i]=3*x;
        }
        total_student_can_participate+=array[i];
    }
    printf("%d\n",total_student_can_participate);
    return 0;
}