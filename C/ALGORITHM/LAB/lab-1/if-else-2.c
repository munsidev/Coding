#include<stdio.h> // Include the standard input-output library

int main()
{
    int a; // Declare an integer variable to store the input number

    // Read an integer input from the user
    scanf("%d", &a);

    // Check if the number is zero, positive, or negative
    if(a == 0) // If the number is exactly zero
    {
        printf("The number is zero."); // Output message for zero
    }
    else if(a > 0) // If the number is greater than zero
    {
        printf("The number is positive."); // Output message for a positive number
    }
    else // If the number is not zero or positive, it must be negative
    {
        printf("The number is negative."); // Output message for a negative number
    }

    return 0; // Indicate successful program termination
}
