#include <stdio.h>
int input(char str[], int n){
    int i;
    for ( i = 0; i < n; i++){
        str[i] = getchar();
        if (str[i] == '\n'){
            break;
        }
    }
   
    return i;
}
int main() {
        char question[10];
        int i=input(question, sizeof(question));
        printf("%s\n%d\n",question,i);
    return 0;
}
