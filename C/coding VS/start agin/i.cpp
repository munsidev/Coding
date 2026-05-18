#include <stdio.h>
#include<string.h>
#include<math.h>
int main() {
    char str[101];
    scanf("%s",str);
    int rotate = 0;
    char position= 'a';
    for (int i = 0; str[i] != '\0'; i++) {
        char target = str[i];
        int forword = abs(target - position);
        int backword = 26 - forword;
        if(forword<backword){
            rotate+=forword;
        }
        else{
            rotate+=backword;
        }
        position = target;
    }
    printf("%d\n", rotate);
    return 0;
}
