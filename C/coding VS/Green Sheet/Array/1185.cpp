#include <iostream>
using namespace std;
int main(){
    double N[12][12];
    char x;
    double sum=0;
    cin>>x;
    for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                   cin >> N[i][j];
                   if(j < 11 - i){
                        sum+=N[i][j];
                   }
            }
   }
    if(x == 'S')
         printf("%.1f\n",sum);
    else
         printf("%.1f\n",sum/66.0);
    return 0;
}
