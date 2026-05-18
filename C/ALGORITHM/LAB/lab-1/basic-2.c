#include<stdio.h> // Include the standard input-output library for functions like printf and scanf

int main()
{
    int a, b; // Declare variables to store the two input numbers

    // Prompt the user to enter two numbers
    printf("Enter two Number: ");
    scanf("%d %d", &a, &b); // Read the two integers from the user

    int sum, dif, mult, mod; // Declare variables for arithmetic results
    float div; // Declare a variable for the division result

    // Perform arithmetic operations
    sum = a + b;        // Calculate the sum of 'a' and 'b'
    dif = a - b;        // Calculate the difference of 'a' and 'b'
    mult = a * b;       // Calculate the product of 'a' and 'b'
    div = (float)a / b; // Calculate the quotient (cast to float for precise division)
    mod = a % b;        // Calculate the remainder of the division of 'a' by 'b'

    // Print the results of the arithmetic operations
    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %f\nModulus = %d\n", sum, dif, mult, div, mod);

    return 0; // Indicate successful program termination
}
