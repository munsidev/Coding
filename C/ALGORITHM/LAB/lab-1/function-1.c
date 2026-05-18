#include <stdio.h> // Include standard input-output header file
/**
 * Function to check even or odd
 * Returns 1 if num is even, otherwise 0
 */
int isEven(int num)
{   
    if(num%2==0){ // Check if the least significant bit is 0 (even number)
        return 1;
    }else
    return 0;
}

int main()
{
    int num; // Declare variable to store user input
    
    printf("Enter any number: "); // Prompt the user to enter a number
    scanf("%d", &num); // Read the number from the user
    
    if(isEven(num)) // Check if the number is even using the isEven function
    {
        printf("The number is even."); // Print if the number is even
    }
    else
    {
        printf("The number is odd."); // Print if the number is odd
    }
    
    return 0; // Indicate successful program termination
}
