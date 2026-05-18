#include <stdio.h> // Include standard input-output header file

int main()
{
    int i = 1, num; // Initialize loop counter to 1 and declare variable for the number

    printf("Enter number to print table: "); // Prompt the user to enter a number
    scanf("%d", &num); // Read the input number from the user

    while(i <= 10) // Loop to generate multiplication table from 1 to 10
    {
        printf("%d * %d = %d\n", num, i, (num * i)); // Print the current multiplication
        i++; // Increment the loop counter
    }

    return 0; // Indicate successful program termination
}
