#include <iostream>
#include <stdio.h>
#include<string.h>
using namespace std;


int main()
{
    long long int N, i;
    scanf("%lld",&N);
    long long int st[N], sh[N];
    long long int s_t=0, s_s=0;
    for(i=0; i<N; i++)
    {
        cin >> sh[i];
        st[i]=0;
    }
    i=0;
    while(1)
    {

       if(sh[i]%2==0 && i==0)
        {
            st[i]=1;
            if(sh[i]>0)
                sh[i]--;
            break;
        	}
        	else if(sh[i]%2==0){
        		 st[i]=1;
            if(sh[i]>0)
                sh[i]--;
            i--;
        	}
        else if(sh[i]%2==1 && i == N-1)
        {
            st[i]=1;
            if(sh[i]>0)
                sh[i]--;
            break;
        	}
       else if(sh[i]%2==1){
        	 sh[i]--;
            st[i]=1;
            i++;
        	}
    }
    for(i=0; i<N; i++)
    {
        s_s += sh[i];
        s_t += st[i];
    }
    cout << s_t <<" "<< s_s <<endl;
    return 0;
}