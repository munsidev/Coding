#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to print the calendar header
void print_calendar_header(int year, int month) {
    char *month_names[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("\n  %s %d\n", month_names[month - 1], year);
    printf("------------------------------------\n");
    printf(" Su Mo Tu We Th Fr Sa\n");
}

// Function to determine the number of days in a given month and year
int get_days_in_month(int year, int month) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && (year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 29;
    }
    return days_in_month[month - 1];
}

// Function to determine the day of the week for the first day of a given month and year
int get_first_day_of_month(int year, int month) {
    time_t t;
    struct tm tm;
    time(&t);
    tm = *localtime(&t);
    tm.tm_year = year - 1900;
    tm.tm_mon = month - 1;
    tm.tm_mday = 1;
    mktime(&tm);
    return tm.tm_wday;
}

// Function to print the calendar body
void print_calendar_body(int year, int month, int first_day, int days_in_month) {
    int day = 1, week_start = first_day;
    while (day <= days_in_month) {
        if (week_start == 0) {
            printf("\n");
        }
        printf("%2d ", day);
        week_start = (week_start + 1) % 7;
        day++;
    }
    printf("\n");
}

// Function to print the calendar
void print_calendar(int year, int month) {
    int first_day = get_first_day_of_month(year, month);
    int days_in_month = get_days_in_month(year, month);
    print_calendar_header(year, month);
    print_calendar_body(year, month, first_day, days_in_month);
}

int main() {
    int year, month;

    printf("Enter the year: ");
    scanf("%d", &year);

    printf("Enter the month (1-12): ");
    scanf("%d", &month);

    if (month < 1 || month > 12) {
        printf("Invalid month.\n");
        return 1;
    }

    print_calendar(year, month);

    return 0;
}