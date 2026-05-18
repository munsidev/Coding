  #include<stdio.h>
int main(){
    int n;
    
    while(scanf("%d",&n)!=EOF){
        
                    
        double min=12.0,a;
       for(int i=0;i<n;i++)
       {
        scanf("%lf",&a);
        if(a<min)
        {
            min=a;
        }
       }
       printf("%0.2lf\n",min);
    }
    return 0;
}