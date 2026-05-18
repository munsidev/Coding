#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        char s[100]; // You can adjust the size based on input constraints
        scanf("%s", s);
        int ct = 0;
        int len = strlen(s);
        
        // Count the number of '1's in the string
        for(int i = 0; i < len; i++){
            if(s[i] == '1')
                ct++;
        }

        int index;
        // Find the first occurrence of '1'
        for(int i = 0; i < len; i++){
            if(s[i] == '1'){
                index = i;
                break;
            }
        }

        int check = 0;
        // Check for consecutive '1's from the found index
        for(int i = index; i < len; i++){
            if(s[i] == '1')
                check++;
            else
                break;
        }

        // Output based on the condition
        if(check == ct && ct > 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
