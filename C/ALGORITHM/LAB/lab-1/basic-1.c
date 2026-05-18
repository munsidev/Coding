#include<stdio.h> 
// Includes the standard input-output library for using functions like printf and scanf.

int main()
// The main function where the program execution begins.
{
    int a; 
    // Declares an integer variable 'a' to store a whole number.

    char b; 
    // Declares a character variable 'b' to store a single character.

    float c; 
    // Declares a float variable 'c' to store a decimal (floating-point) number.

    printf("Enter integer value: ");
    // Prompts the user to enter an integer value.

    scanf("%d", &a); 
    // Reads an integer value from the user and stores it in variable 'a'.

    printf("Enter a Character: ");
    // Prompts the user to enter a character.

    scanf(" %c", &b); 
    /*Reads a single character from user and stores it in variable 'b'.
    The space before '%c' skips any leftover whitespace or newline from the previous input.*/

    printf("Enter a floating Number: ");
    // Prompts the user to enter a floating-point number.

    scanf("%f", &c); 
    // Reads a floating-point number from the user.

    printf("The Integer Value: %d\n", a);
    // Prints the integer value stored in variable 'a'.

    printf("The character: %c\n", b);
    // Prints the character stored in variable 'b'.

    printf("The Floating number: %f\n", c);
    // Prints the floating-point number stored in variable 'c'.

    return 0; 
    // Returns 0 to indicate successful program execution.
}
