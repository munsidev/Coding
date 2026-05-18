#include <stdio.h> // Include standard input-output header file

/* Function declarations */
int maximum(int num1, int num2); // Function to find the maximum of two numbers
int minimum(int num1, int num2); // Function to find the minimum of two numbers

int main() 
{
    int a, b, max, min; // Declare variables for the two numbers and their results
    
    printf("Enter any two numbers: "); // Prompt the user to input two numbers
    scanf("%d%d", &a, &b); // Read the two numbers from the user
    
    max = maximum(a, b);  // Call the function to find the maximum
    min = minimum(a, b);  // Call the function to find the minimum
    
    printf("\nMaximum = %d\n", max); // Print the maximum value
    printf("Minimum = %d", min); // Print the minimum value
    
    return 0; // Indicate successful program termination
}

int maximum(int num1, int num2)
{
    return (num1 > num2) ? num1 : num2; // Return the larger of the two numbers
}


int minimum(int num1, int num2) 
{
    return (num1 > num2) ? num2 : num1; // Return the smaller of the two numbers
}
