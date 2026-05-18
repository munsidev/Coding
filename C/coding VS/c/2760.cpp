#include<stdio.h>
int main(){
    char a[101],b[101],c[101];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    fgets(c,sizeof(c),stdin);
    printf("%s",a);
    printf("%s",b);
    printf("%s\n",c);
    printf("%s",b);
    printf("%s",c);
    printf("%s\n",a);
    printf("%s",c);
    printf("%s",a);
    printf("%s\n",b);
    printf("%.10s",a);
    printf("%.10s",b);
    printf("%.10s\n",c);
    return 0;
}
