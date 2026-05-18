#include<stdio.h>
#include<string.h>
int main(){
    char string1[101],string2[101],string3[101];
    fgets(string1,sizeof(string1),stdin);
    fgets(string2,sizeof(string2),stdin);
    fgets(string3,sizeof(string3),stdin);
    string1[strcspn(string1,"\n")]='\0';
    string2[strcspn(string2,"\n")]='\0';
    string3[strcspn(string3,"\n")]='\0';
    printf("%s%s%s\n",string1,string2,string3);
    printf("%s%s%s\n",string2,string3,string1);
    printf("%s%s%s\n",string3,string1,string2);
    printf("%.10s%.10s%.10s\n",string1,string2,string3);
    return 0;
}