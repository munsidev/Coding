#include<stdio.h>
#include<string.h>
typedef struct s{
    char name[50];
    int page;
}book;
void print(book arr[],int *n){
    for(int i=0;i<*n;i++){
        printf("Book name: %s,\nNumber of pages: %d\n\n",arr[i].name,arr[i].page);
    }
}
void insert(book arr[],int *n){
    for(int i=0;i<*n;i++){
        fgets(arr[i].name,sizeof(arr[i].name),stdin);
        arr[i].name[strcspn(arr[i].name,"\n")]='\0';
        scanf("%d",&arr[i].page);
        getchar();
    }
}
int main(){
    int n;
    scanf("%d",&n);
    getchar();
    book obj[n];
    insert(obj,&n);
    print(obj,&n);
    return 0;
}