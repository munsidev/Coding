#include <stdio.h>
#include <string.h>


int is_divisible(char *year, int divisor) {
    int remainder = 0;
    for (int i = 0; year[i] != '\0'; i++) {
        remainder = (remainder * 10 + (year[i] - '0')) % divisor;
    }
    return (remainder == 0);
}

int main() {
    char year[1100];
    int first = 1;
    

    while (scanf("%s", year) != EOF) {
        int leap_year = 0;
        int huluculu = 0;
        int bulukulu = 0;
        

        if (!first) {
            printf("\n");
        }
        first = 0;
        

        if ((is_divisible(year, 4) && !is_divisible(year, 100)) || is_divisible(year, 400)) {
            printf("This is leap year.\n");
            leap_year = 1;
        }
        
 
        if (is_divisible(year, 15)) {
            printf("This is huluculu festival year.\n");
            huluculu = 1;
        }
        

        if (leap_year && is_divisible(year, 55)) {
            printf("This is bulukulu festival year.\n");
            bulukulu = 1;
        }
 
        if (!leap_year && !huluculu && !bulukulu) {
            printf("This is an ordinary year.\n");
        }
    }
    
    return 0;
}
