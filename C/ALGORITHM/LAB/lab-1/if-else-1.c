#include<stdio.h> // Include the standard input-output library for functions like printf and scanf

int main(){
    int a; // Declare a variable to store the input number

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a); // Read the input number and store it in 'a'

    // Check if the number is even or odd
    if(a % 2 == 0) // If the remainder when 'a' is divided by 2 is 0, it's even
    {
        printf("Even\n"); // Print "Even" if the number is even
    }
    else // Otherwise, the number is odd
    {
        printf("Odd!\n"); // Print "Odd" if the number is odd
    }

    return 0; // Indicate successful program termination
}
