#include <stdio.h> // Include standard input-output header file

int main()
{
    int num, reverse = 0; // Declare variables for the number and its reverse, initialize reverse to 0

    printf("Enter any number to find reverse: "); // Prompt the user to input a number
    scanf("%d", &num); // Read the input number from the user

    while(num != 0) // Loop until the number becomes 0
    {
        reverse = (reverse * 10) + (num % 10); // Multiply reverse by 10, add the last digit of the number
        num /= 10; // Remove the last digit from the number
    }

    printf("Reverse = %d", reverse); // Print the reversed number

    return 0; // Indicate successful program termination
}
