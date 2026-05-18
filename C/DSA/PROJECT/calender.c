#include <stdio.h>

// Function to calculate the number of days in a month
int daysInMonth(int month, int year) {
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
        case 4: case 6: case 9: case 11:
            return 30;
        case 2:
            return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28;
        default:
            return 0; // Invalid month
    }
}

// Function to print the calendar for a specific month and year
void printCalendar(int month, int year) {
    int days = daysInMonth(month, year);
    int dayOfWeek = (1 + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400)) % 7;
    
    printf("    Calendar - %d/%d\n", month, year);
    printf(" Su Mo Tu We Th Fr Sa\n");

    // Print leading spaces
    for (int i = 0; i < dayOfWeek; i++) {
        printf("   ");
    }

    // Print the days
    for (int day = 1; day <= days; day++) {
        printf("%2d ", day);
        if ((day + dayOfWeek) % 7 == 0) {
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    int month, year;

    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Invalid month. Please enter a value between 1 and 12.\n");
        return 1;
    }

    printCalendar(month, year);
    return 0;
}
