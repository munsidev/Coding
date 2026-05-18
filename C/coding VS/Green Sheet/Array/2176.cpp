#include <stdio.h>
#include <string.h>
int main()
{
    char str[102];
    int i, cnt=0;
    scanf("%s", str);
    int n=strlen(str);
    for(i=0; i<n; i++){
        if(str[i]=='1'){
            cnt++;
        }
    }
    if(cnt%2 == 0)
        str[i] = '0';
    else
        str[i] = '1';
    str[i+1] = '\0';
    printf("%s\n", str);
    return 0;
}