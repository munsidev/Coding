#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of records: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of records.\n");
        return 1;
    }
    int id[n];
    int re[n];

    for(int i=0;i<n;++i)
    {
        int x,y;
        printf("Enter ID & Marks: ");
        scanf("%d%d",&x,&y);
        if(y>100){
            printf("Invalid marks Please try again!");
            scanf("%d%d",&x,&y);
            id[i]=x;
            re[i]=y;
        }else{
            id[i]=x;
            re[i]=y;
        }   
    }
    while(1){
         printf("Enter id to search (For exit click Zero!) : ");
        int x;
        scanf("%d",&x);
        
        if(x==0){
        break;
        }

        for(int i=0;i<n;i++)
        {
            if(x==id[i]){
                printf("The result is %d\n",re[i]);
                break;
            }
        }
    }
    
    return 0;
}